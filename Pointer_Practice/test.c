#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16bytes - 数组大小
//	printf("%d\n", sizeof(a+0));//4bytes - 首元素地址
//	printf("%d\n", sizeof(*a));//4bytes - 首元素地址
//	printf("%d\n", sizeof(a+1));//4 - 第二个元素地址
//	printf("%d\n", sizeof(a[1]));//4 - 第二个元素大小
//	printf("%d\n", sizeof(&a));//4 - 数组地址
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a+1));//4 - 跳过数组后的地址大小
//	printf("%d\n", sizeof(&a[0]));//4
//	printf("%d\n", sizeof(&a[0]+1));//4bytes - 第二个元素地址大小
//
//	return 0;
//}

//int main() {
//	char a[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(a));//6bytes - 数组大小
//	//printf("%d\n", sizeof(a + 0));//4bytes - 首元素地址
//	//printf("%d\n", sizeof(*a));//1bytes - 首元素
//	//printf("%d\n", sizeof(a[1]));//1byte - 第二个元素大小
//	//printf("%d\n", sizeof(&a));//4 - 数组地址
//	//printf("%d\n", sizeof(&a + 1));//4bytes - 跳过数组后的地址大小
//	//printf("%d\n", sizeof(&a[0] + 1));//4bytes - 第二个元素地址大小
//
//	printf("%d\n", strlen(a));//随机值
//	printf("%d\n", strlen(a + 0));//随机值
//	//printf("%d\n", strlen(*a));// 'a'-97 错误
//	//printf("%d\n", strlen(a[1]));// 'b'-98 错误
//	printf("%d\n", strlen(&a));//随机值
//	printf("%d\n", strlen(&a + 1));//随机值 -6
//	printf("%d\n", strlen(&a[0] + 1));//随机值 -1
//
//	return 0;
//}

//int main() {
//	char* a = "abcdef";
//	printf("%d\n", strlen(a));//6bytes
//	printf("%d\n", strlen(a + 1));//5bytes
//	//printf("%d\n", strlen(*a));// 错误
//	//printf("%d\n", strlen(a[1]));//  错误
//	printf("%d\n", strlen(&a));//随机值
//	printf("%d\n", strlen(&a + 1));//随机值
//	printf("%d\n", strlen(&a[0] + 1));//5
//
//	printf("%d\n", sizeof(a));//4bytes - 指针大小
//	printf("%d\n", sizeof(a + 1));//4bytes - 第二个元素地址
//	printf("%d\n", sizeof(*a));//1bytes - 首元素
//	printf("%d\n", sizeof(a[0]));//1byte - 第一个元素大小 int arr[10[; arr[0]==*(arr+0) 
//	printf("%d\n", sizeof(&a));//4 - 地址
//	printf("%d\n", sizeof(&a + 1));//4bytes - 地址
//	printf("%d\n", sizeof(&a[0] + 1));//4bytes - 地址
//	return 0;
//}

//int main() {
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr));//48bytes
//	printf("%d\n", sizeof(arr[0][0]));//4bytes
//	printf("%d\n", sizeof(arr[0]));//16
//	printf("%d\n", sizeof(arr[0]+1));//4 a[0]就是第一行第二个元素地址
//	printf("%d\n", sizeof(*(arr[0] + 1)));//4
//	printf("%d\n", sizeof(arr+1));//4 - arr+1就是第2行的地址
//	printf("%d\n", sizeof(*(arr+1)));//16
//	printf("%d\n", sizeof(&arr[0]+1));//4 - 第二行地址
//	printf("%d\n", sizeof(*(&arr[0] + 1)));//16 - 第二行大小
//	printf("%d\n", sizeof(*arr));//16 首元素（第一行）地址，
//	printf("%d\n", sizeof(arr[3]));//16
//
//	return 0;
//}
/*	Sum：
	1.sizeof(数组名)，表示整个数组的大小
	2.&数组名，表示整个数组，取出整个数组的地址
	3.除此之外所有数组名都表示首元素地址
*/

//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//ptr -1 地址向前移动1位
//	//2,5
//	return 0;
//}

//struct Test {
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//假设p的值位0x100000
//Test变量大小是20个字节
//int main() {
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	return 0;
//}

//int main() {
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//
//	printf("%x,%x", ptr1[-1], * ptr2);//0x4,0x02000000
//	return 0;
//	//小端存储
//}

//int main() {
//	int a[3][2] = { {0,1},{2,3},{4,5} };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//0
//	return 0;
//}

//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//&aa+1 ==aa[1] 第二行首元素地址
//	printf("%d,%d\n", *(ptr1-1),*(ptr2-1));//10,5
//	return 0;
//}

//int main() {
//	char* a[] = { "work","at","google" };
//	char** pa = a;
//	pa++;//向后一个char*
//	printf("%s\n", *pa);//"at"
//	return 0;
//}

int main() {
	char* c[] = { "ENTER","NW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *--*++cpp+3);//ER
	printf("%s\n", *cpp[-2]+3);//ST
	printf("%s\n", cpp[-1][-1]+1);//W
	return 0;
}

