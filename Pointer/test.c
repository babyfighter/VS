#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Pointer大小
//void test(int arr[]) {
//	printf("%d\n",(sizeof(arr)/sizeof(arr[0])));
//}
//
//int main() {
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//字符指针 char*
//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main() {
//	const char* p = "abcdef";//常量字符串
//	//*p = 'W';
//	printf("%c\n", *p);//首字符
//	printf("%s\n", p);
//	return 0;
//}

//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char *p2 = "abcdef";
//	//if (arr1 == arr2) {
//	//	printf("same");
//	//}
//	//else {
//	//	printf("diff");
//	//} //same
//	//常量字符串，存储在同一地址
//	//if (p1 == p2) {
//	//	printf("same");
//	//	}
//	//else {
//	//	printf("diff");
//	//}//same
//
//	return 0;
//}

//指针数组 - 是存放指针的数组
//int main() {
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* parr[4] = {0};
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d", *(arr[i]));
//	}
//	return 0;
//}

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针 - 是指针
//int main() {
//	//arr-首元素地址
//	//&arr[0] -首元素的地址
//	//&arr -数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//
//	return 0;
//}

//int main() {
//	char* arr[5];
//	char* (*pa)[5] = &arr;//数组指针
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}

//数组指针通常用于2维数组
//void print1(int arr[3][5],int x,int y){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int x, int y) {
//	int i = 0;
//	for (i = 0; i < x; i++) {
//		int j = 0;
//		for (j = 0; j < y; j++){
//			//printf("%d ",*(*(p + i)+j));
//			//printf("%d ", (*(p + i)) [j]);
//			printf("%d  ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr,3,5);
//	print2(arr, 3, 5);
//	return 0;
//}

//数组参数、指针参数
//二维数组传参,行可以省略，列不能省略
//void test(int arr[3][5]) {
//}
//void test1(int arr[][5]) {
//}
//void test3(int (*arr)[5]) {
//}
//int main() {
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//一级指针传参
//void test1(int* p) {
//}
//int main() {
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	return 0;
//}

//二级指针传参
//void test(int **p){}
//int main() {
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组
//	return 0;
//}

//函数指针 - 是指向函数的指针
//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	//printf("%p\n", &Add);//00C913C0
//	//printf("%p\n", Add);//00C913C0
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//void Print(char* str) {
//	printf("%s\n", str);
//}
//int main() {
//	void (*p)(char*) = Print;
//	(*p)("Hello World");
//	return 0;
//}

//signal函数声明
//signal第一个参数int，第二个是函数指针，该指针指向函数的参数是int，返回类型是void
//signal返回类型也是一个函数指针：该指针指向函数的参数是int，返回类型是void
//void(*signal(int, void(*)(int)))(int);
////简化
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//typedef unsigned int uint;

//int Add(int x, int y) {
//	int z;
//	z = x + y;
//	return z;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));//5
//	printf("%d\n", Add(2, 3));//5
//	printf("%d\n", (*pa)(2, 3));//5
//	printf("%d\n", (**pa)(2, 3));//5
//	printf("%d\n", (***pa)(2, 3));//5
//	return 0;
//}

//int Add(int x, int y) {
//	return x+y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x/y;
//}
//int main() {
//	int* arr[5];
//	//需要一个数组，存放4个函数的地址
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	//int (*pa)(int, int) = Add;
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，指向my_strcpy
//char* (*pf)(char*, const char*);
////2.写一个函数指针数组pfArr，存放4个my_strcpy的地址
//char* (*pfArr[4])(char*, const char*)

//计算器
//函数指针数组用途：转移表
//int Add(int x, int y) {
//	return x+y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x/y;
//}
//void menu() {
//	printf("********************\n");
//	printf("***1.add****2.sub***\n");
//	printf("***3.mul****4.div***\n");
//	printf("******0.exit********\n");
//	printf("********************\n");
//}
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		menu();
//		printf("Please choose:>");
//		scanf("%d", &input);
//		//pfArr是函数指针数组
//		int (*pfArr[5])(int, int) = {0,Add,Sub,Mul,Div};
//		if (input >= 1 && input <= 4) {
//			printf("Please insert two numbers:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("Exit\n");
//		}
//		else{
//			printf("Wrong\n");
//		}
//		
//		//switch (input) {
//		//case 1:
//		//	printf("Please insert two numbers:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Add(x, y));
//		//	break;
//		//case 2:
//		//	printf("Please insert two numbers:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Sub(x, y));
//		//	break;
//		//case 3:
//		//	printf("Please insert two numbers:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Mul(x, y));
//		//	break;
//		//case 4:
//		//	printf("Please insert two numbers:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Div(x, y));
//		//	break;
//		//case 0:
//		//	printf("Exited\n");
//		//	break;
//		//default:
//		//	printf("Try again!\n");
//		//	break;
//		//} 
//	}
//	while (input);
//}

//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*pfArr[4])(int, int);
//	int (*(*ppfArr[4]))(int, int)=&pfArr;//ppfArr数组指针，指向的数组4元素
//	//指向数组每个元素的类型是函数指针
//	return 0;
//}

/*
	回调函数：通过函数指针调用的函数
*/
//函数test中调用p，print被称为回调函数
//void print(char*str) {
//	printf("HEHE:", str);
//}
//void test(void (*p)(char*)) {
//	printf("test\n");
//	p("bit");
//}
//int main() {
//	test(print);
//	return 0;
//}

//Review
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int* arr[10];//指针数组
//	int* (*pa)[10] = &arr;//数组指针
//	int (*pAdd)(int, int) = Add;//函数指针
//	int (*pArr[4])(int, int);//函数指针的数组
//	int (*(ppArr)[4])(int, int) = &pArr;//指向函数指针数组的指针
//	return 0;
//}

//qsort 库函数
//#include<stdlib.h>
//#include<string.h>
//struct Stu {
//	char name[20];
//	int age;
//};
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
//int cmp_int(const void* e1, const void* e2){
//	//比较两个integer
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_float(const void* e1, const void* e2) {
//	//比较两个float
//	return *(float*)e1 - *(float*)e2;
//}
//int cmp_stu_by_age(const void* e1, const void* e2) {
//	//比较struct中的integer
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2) {
//	//比较string
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
////整型数组
//void test1() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
////float array
//void test2() {
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%f ", f[i]);
//	}
//}
////struct Stu
//void test3() {
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main() {
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	void* p = &a;//void*指针可以接收任意类型的地址
//	//*p = 0;
//	//void*类型指针 不能进行解引用操作
//	//void*类型指针 不能进行+-整数的操作
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

//struct Stu {
//	char name[20];
//	int age;
//};
//Swap(char* buf1,char*buf2, int width) {
//	int i = 0;
//	for (i = 0; i < width; i++) {
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(const void* e1, const void* e2){
//	//比较两个integer
//	return *(int*)e1 - *(int*)e2;
//}
////冒泡 - 支持所有类型
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2)) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		for (j = 0; j < sz - 1; j++) {
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
//				Swap(cmp((char*)base + j * width, (char*)base + (j + 1) * width);
//			}
//		}
//	}
//}
//void test4() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int );
//}
//int main() {
//	test4();
//	return 0;
//}

