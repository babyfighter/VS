#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>

//int main()
//{
	//int a = 10;
	//int arr[] = { 1,2,3,4,5,6 };
	//printf("%d\n", sizeof (arr));
	//printf("%d\n", sizeof(a));

	//int a = 0;
	//int b = ~a;//-1
	//int c = a++;//前置+/- 先使用，后置先+/-再使用
	////按2进制位取反
	//printf("%d\n", b);
	////0表示假，非0表示真

	//int a = 10;
	//int b = 20;
	//int max = 0;

	//max = (a > b ? a : b);
	//printf("%d\n",max);
	
	//register int a = 10;//定义成寄存器变量
	//signed int a = 10;//定义有符号变量，可以省略
	//unsigned int num = 0;//无符号变量，永远正数
	//struct //结构体关键字
	//typedef unsigned int u_int; //类型重定义
	//u_int num = 20;
//}

//static 修饰局部变量，局部变量生命周期边长
//void test()
//{
//	static int a = 1;//静态局部变量
//	a++;
//	printf("a= %d\n", a);// 2 3 4 5 6
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//	}
//	return 0;
//}

//static 修饰全局变量 改变了变量的作用域
//静态全局变量 只能在自己所在源文件内部使用
//int main() {
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//static修饰函数 改变了函数的链接属性: 外部链接属性 ->内部链接属性
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}

//#define 定义标识符常量； 定义宏-带参数
//#define MAX(X,Y) (X>Y?X:Y)//宏
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max =%d\n", max);
//	return 0;
//}

//内存地址 一个单元byte(8 bits)
//int main() {
//	int a = 10;
//	int* p = &a; //&a 取地址,这种变量用来存放地址-指针变量
//	printf("%p\n", p);// 十六进制地址
//	printf("%p\n", &a);
//	*p = 20;//* -解引用操作符
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//
//	return 0;
//}

//指针大小在32位平台是4bytes，64位平台是8bytes
//int main() {
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//复杂对象 --结构体 --自己创建的类型（Object）
//struct Book {
//	char name[20];
//	short price;
//};
//int main() {
//	struct Book b1 = { "C language",55 };
//	//字符串拷贝
//	strcpy(b1.name,"C++");
//	printf("%s\n", b1.name);
//	//struct Book* pb = &b1;
//	////利用pb打印书名和价格
//	//// “.” ：结构体变量“，”成员
//	////“->”：结构体指针->成员
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//	//printf("Name: %s\n", b1.name);
//	//printf("Name: %d\n", b1.price);
//	return 0;
//}
//
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1) {
//		if (b == 2)
//			printf("1");
//	}
//	else
//			printf("2");
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1: printf("a");
//		break;
//	case 2: printf("b");
//		break;
//	case 3: printf("c");
//		break;
//	default:printf("Invalid");
//		break;
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	while (i < 10) {
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}

int main() {
	int ch = getchar();//ctrl+z 就会获取EOF(End of File - (-1)) 会退出
	putchar(ch);

	return 0;
}