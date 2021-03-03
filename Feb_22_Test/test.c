#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	double a = 5 % 2;
//	printf("a=%lf\n", a);
//	return 0;
//}

//算术右/左移，右边丢弃，左边补原符号位
//逻辑右/左移：右边丢弃，左边补0
//通常是算术右移
//int main() {
//	int a = 16;
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}

//&:二进制位与
//|：二进制位或
//^：二进制位异或，相同为0，相异为1
//&&：逻辑与
//||:逻辑或
//~：按二进制位取反
//void test1(int arr[]) {
//	printf("%d\n", sizeof(arr));//pointer size 4
//}
//void test2(char ch[]) {
//	printf("%d\n", sizeof(ch));//pointer size 4
//}
//int main() {
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//从左至右，最后一个表达式是整个结果
//	printf("%d\n", c);
//	return 0;
//}

//结构体
//struct Stu {
//	char name[20];
//	int age;
//	char id[20];
//};
//int main() {
//	struct Stu s1 = { "San",20,"20210222" };
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%d\n", ps->age);
//	printf("%s\n", s1.id);
//	return 0;
//}

//操作符
//int main() {
//	char a = 3;//00000011
//	char b = 127;//01111111
//	//char类型1个字节 8bits，会发生截断
//	//相加时整型提升，按符号位补高位；无符号类型高位补0
//	//short，char只要参与表达式计算，就会发生整型提升
//	char c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

/* 
pointer:存放地址，地址是唯一标识一块地址空间的
32位平台是4bytes，64位平台8bytes
pointer类型决定 1.指针进行解引用操作时，能够访问空间的大小
				2. 指针的步长（+1走多远）
*/
//int main() {
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = 1;
//	}
//	return 0;
//}

/*
	规避野指针：
	1.指针初始化
	2.小心指针越界
	3.指针指向空间释放时，及时赋值为NULL
	4.检查指针有效性
*/
//int* test() {
//	//static int a = 10;
//	int a = 10;//野指针
//	return &a;
//}
//int main() {
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}]
//指针减去指针是中间元素个数
//int main() {
//	int arr[6] = { 1,2,3,4,5,7 };
//	printf("%d\n", &arr[5] - &arr[0]);
//	return 0;
//}
/*
	允许指向数组元素的指针和指向数组最后元素后面的内存位置的指针进行比较，
	但不能和第一个元素之前的内存位置的指针比较
*/

//int main() {
//	int arr[10] = { 10 };
//	printf("%p\n", arr);//地址-首元素的地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//&arr- 整个数组的地址
//	//sizeof(arr)- 整个数组的大小
//	return 0;
//}

//直接通过指针访问数组
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;//指针存放数组首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%p", p + i, & arr[i]);
//	}
//	return 0;
//}

//二级指针
//int main() {
//	int a = 10; 
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	int*** pppa = &ppa;
//	return 0;
//}

//指针数组
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//Practice
//统计整数二进制中1的个数
//int count_bit_one(int n) {
//	int count = 0;
//	//每次会将最右边的1去掉
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	return 0;
//}

