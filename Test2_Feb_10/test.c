#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//字面常量： 数值常量
//const：常属性
//#define：定义的标识符常量
//枚举常量：关键字-enum 每个值都有编号且不可改变
//#define MAX 10
//
//enum weather
//{
//	SUNNY,//0
//	RAINY,//1
//	SNOW//2
//};
//int main() 
//{
//	enum weather w = SUNNY;
//
//	printf("%d\n", w);
//
//	return 0;
//}

//int main()
//{
//	//char arr1[] = "abc";//String结束标志 /0,不算字符内容。字符串自带一个0; '/0'=0
//	//char arr2[] = {'a','b','c'};
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));
//	//printf("WARN\a");
//	// \ddd 1~3个八进制数字
//	// \xdd 2个十六进制数字
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("Studying...\n");
//	while (line < 200)
//	{
//		printf("One line: %d\n",line);
//		line++;
//	}
//	if (line >=200)
//		printf("Offer\n");
//	return 0;
//}

//Add(int x, int y)
//{
//	int z = x + y;
//	return y;
//}
//
//int main()
//{
//
//	int sum = 0;
//	sum = Add(3, 5);
//	printf("sum= %d\n", sum);
//	return 0;
//}

int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	printf("%d\n", c);
	printf("%d\n", sizeof(c));
	//sizeof 单位是byte，计算所占空间的大小
	return 0;

	//int a = 1;
	//int x = a<<1;
	//printf("%d\n",x);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d", arr[i]);
	//	i++;
	//}
}