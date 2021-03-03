#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//Debug调试版本
//Release发布版本
//Debug版本可调试，文件中包含了调试信息（占空间大）;Release版本不能调试
//int main() {
//	int i = 0;
//	for (i = 0; i < 100; i++) {
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}

/*
	1.Stack默认使用：先使用高地址处的空间
	2.数组随着下标的增长，地址由低到高
	3.arr[12]已经是i 的空间 &arr[12]==&i，i=0； 死循环
	4.不同编译器下，内存布局位置不同，Release和Debug内存地址也会优化
*/
//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {//arr[10]=0 非法访问
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

/*
	F5 -启动调试
	CTRL+F5 -不调试运行
	F9 -切换断点
	F11 -逐语句（可以进入函数内部）
	F10 -逐过程
	DEBUG- WINDOWS- 各类选项
*/
//int main() {
//	int i = 0;
//	for (i = 0; i < 100; i++) {
//		printf("%d ", i);
//	}
//	for (i = 0; i <100; i++) {
//		printf("%d ",10-i);
//	}
//	return 0;
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++) {
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

/*
	arr2 '\0'也被拷贝过去,所以只打印出'bit'
*/
//strcpy实现
//void my_strcpy(char* dest,char* src) {
//	while (*src != '\0') {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}
//strcpy优化
//void my_strcpy(char* dest,char* src) {
//	if (dest != NULL && src != NULL) {
//		while (*dest++ = *src++) {
//			;
//		}
//	}
//}
//CHAR* STRCPY(CHAR *strDest, const CHAR*strSRC)
//
//再次优化，防止NULL传入
#include <assert.h>
//void my_strcpy(char* dest, char* src) {
//	assert(dest !=NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++) {
//		;
//	}
//}
//int main() {
//	//strcpy实现
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}

//const
//int main() {
//	const int num = 10;
//	int* const p = &num;
//	*p = 20;
//	//const放在指针变量的左边时，修饰的是*p,此时不能通过p来改变A*p的值
//	//const放在指针变量的右边时，修饰的是p,此时p不能被改变
//	//int n = 100;
//	//p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}

int my_strnlen(const char* str) {
	assert(str != NULL);//保证指针有效性
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
int main() {
	char arr[] = "abcdef";
	int len = my_strnlen(arr);
	printf("%d\n", len);
	return 0;
}

