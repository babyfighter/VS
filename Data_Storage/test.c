#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
	类型的意义：
	1.类型开辟内存空间的大小（大小决定适用范围）
	2.如何看待内存空间的视角
*/
//int main() {
//	int a = 10;//0x0059FC24
//	float f = 10.0;//0x0059FC18
//
//	return 0;
//}

/*
	整型：
		char 
		unsigned char/signed char
		short
		unsigned short[int]/signed short[int]
		int
		unsigned int/signed int
		long
		unsigned long[int]/signed long[int]
	浮点型：
		float：单精度
		double：双精度
	构造类型：
		数组
		结构体类型 struct
		枚举类型 enum
		联合类型 union
	指针类型
		int* pi
		char* pc
		float* pf
		void* pv
	空类型
		void
*/
//原码，补码，反码均有符号位和数值位。0表示正，1表示负
//正数/无符号数: 原码，补码，反码相同；负数: 反码符号位不变，其他取反； 补码就是反码+1
//整数在内存中存储的是二进制补码
//大端存储模式：数据的低位(个，十，百...)保存在内存的高地址中
//小端存储模式：数据的低位保存在内存的低地址中
//大于8位的处理器，由于register宽度大于一个字节，会存在将多个字节安排的问题，导致了大小端存储模式
//int main() {
//	int a = 20;//14 00 00 00
//	int b = -10;//f6 ff ff ff
//	//小端存储
//	return 0;
//}

//判断当前机器字节序
//int check_sys() {
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int check_sys() {
//	int a = 1;
//	return *(char*)&a;
//}
//int main() {
//	int a = 1;
//	char* p = (char*)&a;
////小端返回1，大端返回0
//	int ret = check_sys();
//	if (ret == 1) {
//		printf("Small\n");
//	}
//	else {
//		printf("Big\n");
//	}
//	return 0;
//}

//int main() {
//	char a = -1;//-1
//	signed char b = -1;//-1
//	unsigned char c = -1;//255
//	printf("%d,%d,%d", a, b, c);//整型提升,按符号位补
//	return 0;
//}

//int main() {
//	char a = -128;//有符号
//	//10000000 00000000 00000000 10000000 原码
//	//11111111 11111111 11111111 10000000 补码
//	//100000000
//	//11111111 11111111 11111111 10000000 整型提升后补码，按照无符号打印
//	printf("%u\n", a);
//	//%d-打印十进制有符号数字
//	//%u-打印十进制无符号数字
//	return 0;
//}

/*
	char 
	1 byte
	8 bits
	signed char: -128~127
	unsigned char: 0~255
*/
//int main() {
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//int main() {
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//#include<string.h>
//int main() {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//255 char的范围
//	return 0;
//}

/*
	float 8bytes
	IEEE754 二进制浮点数V表示：(-1)s*M*(2^E)； 符号位，有效数字；指数位
	32位：1 bit 符号位， 8bits  指数E，23bits M
	64位：1 bit 符号位， 11bits 指数E，52bits M
	M个位数的1省略，可以多保存一位有效数字
	E为unsigned int(0~255)
	1.E不全为0/1： E的计算值减去127，得到真实值，再将M前加上第一位的1
	2.E全为0：E等于1-127，M不再加上第一位的1，而是还原为0.xxx的效数
	3.E全为1，如果M全为0，表示+-无穷大
*/
//int main() {
//	double d = 1E10;
//	printf("%lf\n", d);//1.0x10^10
//	return 0;
//}

//int main() {
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n == %d\n", n);
//	printf("pFloat == %f\n", *pFloat);
//	//(-1)^0 * 0.000000000000000000001001 * 2^-126
//
//	*pFloat = 9.0;
//	printf("n == %d\n", n);
//	printf("pFloat == %f\n", *pFloat);
//	return 0;
//}

