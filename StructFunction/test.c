#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体
//链表- 结构体自引用
//struct Node {
//	int data;
//	struct Node* next;
//};
//int main() {
//
//	return 0;
//}

//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node;
//int main() {
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//结构体变量的定义和初始化
//struct T {
//	double weight;
//	int age;
//};
//struct S {
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main() {
//	struct S s = { 'c',{70.7,30},100,3.14,"hello" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	return 0;
//}

/*	结构体内存对齐：
	1.第一个成员在与结构体变量偏移量为0的地址处存放
	2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
	对齐数 = 编译器默认的一个对齐数与该成员大小的较小值 *VS默认为8
	3.结构体总大小为最大对齐数的整数倍
	4.如果嵌套结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体整体大小就是所有
	最大对齐数（含嵌套结构体的对齐数）的整数倍

	为什么存在内存对齐：
	1.平台：不是所有硬件平台都能访问任意地址上的任意数据。
	2.性能：对齐的内存访问仅需要一次访问，未对齐内存处理器需要两次访问

	*让占用空间小的成员尽量集中在一起
*/
//struct S1 {
//	char c1;
//	int a;
//	char c2;
//};
//struct S2 {
//	char c1;
//	char c2;
//	int a;
//};
//struct S3 {
//	double d;
//	char c;
//	int i;
//};
//struct S4 {
//	char c;
//	struct S3 s3;
//	double d;
//};
//int main() {
//	struct S1 s1 = { 0 };
//	printf("%d\n",sizeof(s1));//12 
//	struct S2 s2 = { 0 };
//	printf("%d\n",sizeof(s2));//8
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//32
//	return 0;
//}
//更改默认对其数
//#pragma pack(1)
//struct S {
//	char c1;
//	double d;
//};
//// #pragma pack()
////取消设置的默认对齐数
//int main() {
//	struct S s;
//	printf("%d\n", sizeof(s));//12
//	return 0;
//}

//offsetof() 计算偏移量 属于宏
//#include<stddef.h>
//struct S {
//	char c;
//	int i;
//	double d;
//};
//int main() {
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//	return 0;
//}

//struct S {
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps) {
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////传值
//void Print1(struct S tmp) {
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
////传址
//void Print2(const sstruct S* ps) {
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main() {
//	struct S s;
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	//s.a = 100;
//	//s.c = 'w';
//	//s.d = 3.14;
//	//printf("%d\n", s.a);
//	return 0;
//}

//位段：生命和结构体类似
//1.成员必须是int、unsigned int、signed int，整型，成员变量统一类型
//2.成员名后边有一个冒号和一个数字(二进制位)
//struct S {
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main() {
//	struct S s;
//	printf("%d ", sizeof(s));//8
//	return 0;
//}

//位段内存分配：
//1.成员是整形类型
//2.空间是按照以4个字节(int)或者1个字节(char)的方式开辟
//3.位段不跨平台
/*
	跨平台问题：
	1.int位段 是否有符号不确定
	2.位段中最大位的数目不能确定
	3.位段中的成员在内存中从左向右还是从右向左分配标准未定义
	4.当一个结构包含两个位段，第二个位段成员比较大，无法容纳于
	 第一个位段剩余的位时，是否舍弃剩余的位不确定
*/
//struct S {
//	int _a : 3;
//	int _b : 4;
//	int _c : 5;
//	int _d : 4;
//};
//int main() {
//	struct S s = { 0 };
//	s._a = 10;
//	s._b = 20;
//	s._c = 3;
//	s._d = 4;
//	printf("%d ", sizeof(s));//8
//	return 0;
//}

//枚举 - enum
//enum Color {
//	//枚举的可能取值-常量
//	RED,
//	GREEN=9,//可以赋初始值
//	BLUE
//};
////#define RED 1;
////#define BLUE 2;
////#define GREEN 3;
//int main() {
//	printf("%d %d %d\n", RED, GREEN, BLUE);//0 1 2
//	return 0;
//}
//枚举的优点：（#define）也可以定义
/*
* 1.增加代码的可读性和可维护性
* 2.和#define定义的标识符比较 枚举右类型检查 更加严谨
* 3.防止了命名污染（封装）
* 4.便于调试
* 5.使用方便，一次可以定义多个常量
*/

//联合体 union
//特殊的自定义类型 包含一系列的成员，特征是成员共用同一块空间
//union Un{
//	char c;
//	int i;
//};
//int main() {
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &(u));//0113FBC4
//	printf("%p\n", &(u.c));//0113FBC4
//	printf("%p\n", &(u.i));//0113FBC4
//	return 0;
//}

//判断大小端存储
//check_sys() {
//	int a = 1;
//	return *(char*)&a;
//}
//check_sys2() {
//	union Un {
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端；返回0，表示大端
//	return u.c;
//}
//int main() {
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//		printf("Small");
//	else
//		printf("Big");
//	return 0;
//}

//联合体大小
//1.至少是最大成员的大小
//2.当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍
union Un {
	int a;//4 对齐数4
	char arr[5];//5 对齐数1
};
int main() {
	union Un u;
	printf("%d\n", sizeof(u));//8
	return 0;
}