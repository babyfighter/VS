#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<Windows.h>
//struct S {
//	int age;
//};
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];//可变长数组
//
//	return 0;
//}

/*
	创建变量方式：
	int a =10;//局部变量 Stack
	int g_a=10;//全局变量 - 静态区
	int arr[10]
	*空间开辟大小固定的
	*数组在claim时必须指定长度，他所需要的内存在编译时分配
	
	动态内存：Heap区
	动态内存分配函数：
	1.malloc
	2.free
	3.calloc
	4.realloc
*/

//malloc、free
//malloc：向内存申请一块连续可用的空间，并返回指向这块空间的指针
//free：用来释放动态开辟的内存
//int main() {
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL){
//		printf("%s\n",strerror(errno));
//		}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i)=i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d ",*(p + i));
//		}
//	}
//	//当动态申请的空间不再使用,但p指针还能找到内存空间
//	free(p);
//	p = NULL;//防止p的内容被追踪
//	return 0;
//}

//calloc
//为num个大小为size的元素开辟一块空间，并且每个字节初始化为0
//int main() {
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//调整动态开辟内存的大小
//int main() {
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else {
//		int i = 0;
//		for (i = 0; i < 5; i++) {
//			*(p + i) = i;
//		}
//	}
//	//realloc使用的注意事项
//	/*
//		1.如果p指向的空间之后有足够的内存，可以追加，则直接追加，后返回p
//		2.如果p 指向的空间之后没有足够的内存，则realloc函数会重新开辟一块内存区域，
//		  并且把原来内存中数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存地址
//		3.用新的变量来接收realloc函数的返回值，防止空指针
//	*/
//	int* ptr = realloc(p, 4000);
//	if (ptr != NULL) {
//		p = ptr;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		*(ptr + i) = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", *(ptr +i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main() {
////1. 对NULL进行解引用操作
//	//int* p = (int*)malloc(40);
//	////万一malloc失败，p就被赋值NULL
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
////2. 对动态开辟内存的越界访问
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL) {
//	//	return 0;
//	//}
//	//else {
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++) {
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
////3. 对非动态开辟内存的free
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
////4. 使用free释放动态开辟内存的一部分
//int* p = (int*)malloc(40);
//if (p == NULL) {
//	return 0;
//}
//int i = 0;
//for (i = 0; i < 10; i++) {
//	*p++= i;//p地址已经发生变化
//}
//free(p);
//p = NULL;
////5.对同一块动态内存的多次释放
//int* p = (int*)malloc(40);
//if (p == NULL) {
//	return 0;
//}
//free(p);//需要赋值NULL，防止多次释放
//free(p);
////6.动态开辟内存忘记释放空间（内存泄漏）
//while (1) {
//	malloc(1);
//	Sleep(1000);
//}
//return 0;
//}

//1.运行代码会出现崩溃
//2.程序存在内存泄漏的问题 - 值传递
// p是GetMemory的形参，只能函数内部有效，函数返回后，动态开辟内存尚未释放，且无法找到
//void GetMemory(char* p) {
//	p = (char*)malloc(100);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(str);//值传递
//	strcpy(str, "hello");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}
//改正1
//void GetMemory(char** p) {
//	*p = (char*)malloc(100);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str);//值传递
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main() {
//	Test();
//	return 0;
//}
//改正2
//char* GetMemory(char* p) {
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void) {
//	char* str = NULL;
//	str = GetMemory(str);//值传递
//	strcpy(str, "hello");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

//返回栈空间地址问题
//局部变量创建在Stack，出了函数就会销毁
//非法访问栈空间地址
//char* GetMemory(void) {
//	char p[] = "hello world";
//	return p;
//}
//void Test(void) {
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//随机值
//}
//int main() {
//	Test();
//	return 0;
//}
////非法访问栈空间,使用static解决
//int* test() {
//	//static int a = 10;//静态区
//	int a = 10;//Stack区
//	return &a;
//}
//int main() {
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int* test() {
//	int* ptr = malloc(100);//Heap,free后才能回收
//	return ptr;
//}
//int main() {
//	int* p = test();
//	return 0;
//}
//存在内存泄漏，会输出"hello"
//void GetMemory(char** p,int num) {
//	*p = (char*)malloc(num);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str,100);
//	strcpy(str, "hello");
//	printf(str);
//	//改
//	free(str);
//	str = NULL;
//}
//int main() {
//	Test();
//	return 0;
//}

//打印"world"
//非法访问内存，str不为NULL
//void Test(void) {
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//str成为野指针，下面判断失效
//	if (str != NULL) {
//		strcpy(str, "world");
//		printf(str);
//	}
//} 
//int main() {
//	Test();
//	return 0;
//}

//flexible array 
//struct S {
//	int n;
//	int arr[0];//flexible array - 数组大小可调整
//};
//int main() {
//	struct S s;
//	//printf("%d\n", sizeof(s));//4 - 未包含柔性数组大小
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//一次性建立连续的空间，包含arr的空间
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;//0 1 2 3 4 
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL) {
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++) {
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//flexible array
//1，方便释放内存，只需要malloc一次，free一次
//2.内存碎片少，利用率增加，利于访问速度
//struct S {
//	int n;
//	int* arr;//flexible array - 数组大小可调整
//};
//int main() {
//	struct S* ps= (struct S*)malloc(sizeof(struct S));//ps指向n和arr
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", ps->arr[i]);//0 1 2 3 4 
//	}
//	//调整大小
//	int*ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL) {
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++) {
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", ps->arr[i]);//0 1 2 3 4 
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

