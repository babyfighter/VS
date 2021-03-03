#include<stdio.h> //standard input output
#define _CRT_SECURE_NO_WARNINGS 1


//int main() {
//
//	char ch = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
// comment/uncomment Ctrl K + C/U

int main() 
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	extern int g_var;//声明全局作用域

	scanf_s("%d%d", &num1, &num2);//取地址符号&
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}