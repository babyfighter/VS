#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Stu {
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}s1,s2,s3;//全局结构体变量

typedef struct Stu {
	char name[20];
	short age;
	char tel[12];
	char sex[5];
}Stu;//重定义类型

//int main(){
//	Stu s;//局部结构体变量,放入值开始初始化
//	return 0;
//}

//结构体成员变量可以是其他结构体
//结构体传参地址性能更好，传递结构体对象时，结构体过大，参数压栈性能会下降
//struct T {
//	struct Stu s;
//};
//
//int main() {
//	struct T t = { {"asd",20} };
//	printf("%d\n", t.s.age);
//	return 0;
//}

