#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>

//strcpy
//int main() {
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	//copy时有/0，后面的内容不会被打印
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//memset
//int main() {
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s", arr);//***** world
//	return 0;
//}


//void Swap1(int x, int y) {
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//无法交换,简单认为形参实例化相当于实参的一份临时拷贝
//传值调用，形参和实参分别占用不同内存，形参的修改不影响实参
//
//void Swap2(int* a, int* b) {
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}//传递指针地址
//函数内部可以直接操作函数外部的变量
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a = %d b =%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a = %d b =%d\n", a,b);
//	return 0;
//}

////判断素数
//#include<math.h>
//int is_prime(int n) {
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++) {
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main() {
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		if (is_prime(i) == 1)
//			printf("%d\t", i);
//	}
//}

//#include "add.h"
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//
//int main() {
//
//	unsigned int num = 0;
//	scanf("%d ", &num);
//	print(num);
//	return 0;
//}

////求字符串长度(strlen)
//int my_strlen(char* str) {
//	//int count = 0;
//	//while (*str != '\0') {
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main() {
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//递归
//int Fac(int n) {
//	if (n <= 1)
//		return 1;
//	else return n * Fac(n - 1);
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//二维数组，初始化时行可以省略，列不行 int arr[][4]={{1,2},{3,4}}
//二维数组在内存中存储也是连续的
//Bubble Sort
//void bubble_sort(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int flag = 1;//假设数据已经有序
//
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本次排序数据无序
//			}
//		}
//		if (flag == 1){
//			break;
//		}
//	}
//}
//int main() {
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr进行传参，实际传递的是arr首元素的地址 &arr[0]
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

int main() {
	//sizeof(数组名) - 表示整个数组大小，单位byte
	//&数组名，取出的是整个数组的地址
	int arr[] = {1,2,3,4,5,6,7 };
	printf("%p\n", arr);//数组的地址
	printf("%p\n", &arr[0]);//首元素地址
	printf("%p\n", &arr);//数组的地址
	printf("%d\n", *arr);//首元素地址
	return 0;
}
