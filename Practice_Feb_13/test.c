#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int sum(int a) {
//	int c = 0;
//	static int b = 3;//static 控制变量可见范围，循环时不会初始化b的值
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main() {
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++) {
//		printf("%d\n", sum(a));
//	}
//}

//3个数字从大到小排序
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b) {
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c) {
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c) {
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//0~100 3的倍数
//int main(void) {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0)
//			printf("%d\t", i);
//	}
//}

//最大公约数
//int main(void) {
//	int m;
//	int n;
//	scanf("%d%d", &m, &n);
//	while (int r = m % n) {
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//}

//素数
//#include<math.h>
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++);
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			count++;
//			printf("%d", i);
//		}
//	}
//	printf("\ncount= %d", count);
//	return 0;
//}

//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += flag* 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//}

//int main(void) {
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//}

//乘法表
//int main() {
//	int i = 0;
//	for (i = 1; i <= 9; i++) {
//		int j = 1;
//		for (j = 1; j <= i; j++) {
//			printf("%2d*%d=%-2d", i, j, i * j);//+/-2d 右对齐/左对齐，0填充
//		}
//		printf("\n");
//	}
//}

#include<stdlib.h>
#include <time.h>
void random() {
	int ret = 0;
	srand((unsigned int)time(NULL));//时间戳设置随机数生成起点
	//time_t
	ret = rand();
	printf("%d\n", ret);
}

