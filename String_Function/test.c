#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//字符串旋转
//int is_left_move(char* str1, char* str2) {
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1中追加一个str1字符串
//	//strcat(str1, str1);//err
//	strncat(str1,str1,6);//abcdefabcdef
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr找子串
//	char*ret=strstr(str1, str2);
//	if (ret == NULL) {
//		return 0;
//	}
//	else{
//		return 1;
//	}
//}
//int main() {
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("yes");
//	}
//	else {
//		printf("no");
//	}
//
//	return 0;
//}

//杨氏矩阵
//时间复杂度小于O(N)
//int FindNum(int arr[3][3], int k, int row, int col) {
//	int x = 0;
//	int y = col - 1;
//	while (x<=row-1 && y>=0) {
//		if (arr[x][y] > k) {
//			y--;
//		}
//		else if (arr[x][y] < k) {
//			x++;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}
//int FindNum2(int arr[3][3], int k, int* px, int* py) {
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0) {
//		if (arr[x][y] > k) {
//			y--;
//		}
//		else if (arr[x][y] < k) {
//			x++;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x = 3;
//	int y = 3;
//	int k = 5;
//	int ret = FindNum2(arr, k, &x, &y);
//	if (ret == 1) {
//		printf("k=%d,coordinate is %d,%d\n", k,x,y);
//	}
//	else {
//		printf("No Such Element");
//	}
//	return 0;
//}

//C本身没有字符串类型，通常放在常量字符串或字符数组中
//strlen(const char* str)p;
//int main() {
//	int len = strlen("abcdef");
//	//char arr[] = { 'a','b','c' };
//	printf("%d\n", len);
//	//printf("%d\n", strlen(arr));//随机值
//	return 0;
//}

//strcpy
//char* my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//int main() {
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	return 0;
//}

//strcat
//my_strcat(char* dest, const char* src) {
//	char* ret = dest;
//	assert(dest && src);
//	//1.找到目标字符串的\0
//	while (*dest != '\0') {
//		dest++;
//	}
//	//2.追加
//	while (*dest++ =*src++) {
//		;
//	}
//	return ret;
//}
//int main() {
//	char arr1[30] = "hello";//目标空间需要足够大
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp
//比较对应字符而不是长度
//int main() {
//	char* p1="abcdef";
//	char* p2 ="sqwer" ;
//	//int ret = strcmp(p1, p2);
//	if (strcmp(p1, p2) >0) {
//		printf("p1>p2");
//	}
//	else if (strcmp(p1, p2) == 0) {
//		printf("p1==p2");
//	}
//	else if(strcmp(p1, p2) < 0) {
//		printf("p1<p2");
//	}
//	return 0;
//}
//my_strcmp(const char* str1,const char*str2) {
//	assert(str1 && str2);
//	//compare
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main() {
//	char* p1 = "abcdeft";
//	char* p2 ="abcdef" ;
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}

/*
	长度受限制： strncat strncpy strncmp
	长度不受限制： strcat strcpy strcmp
*/
//int main() {
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	return 0;
//}

//int main() {
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret=strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr - 第一次出现的地址
//int main() {
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret=strstr(p1, p2);
//	if (ret == NULL)
//		printf("Not Exist");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//strtok - 切分字符串
//int main() {
//	char arr[] = "zpw@bit.tech";
//	char arr1[] = "192.168.31.121";//点分十进制
//	char* p = ".";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr1);
//	char* ret = NULL;
//	for (ret = strtok(arr1, p); ret != NULL;ret=strtok(NULL,p)) {
//		printf("%s\n", ret);
//	}
//
//	//char* ret = strtok(buf, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}

//strerror - 返回错误码
//#include<errno.h>
//int main() {
//	/*	
//		0 - No error
//		1 - Operation not permitted
//		2 - No such file or directory
//		C库函数执行过程中，发生了错误，就会把对应的错误码赋值到errno中
//	*/
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		printf("success");
//	}
//	return 0;
//}

#include<ctype.h>
//int main() {
//	char ch = tolower('Q');
//	putchar(ch);
//	return 0;
//}

//内存函数
//memcpy
struct S {
	char name[20];
	int age;
};
void* my_memcpy(void* dest, const void* src, size_t num) {
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--) {
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
my_memmove(void* dest, void* src, size_t count) {
	void* ret = dest;
	assert(dest && src);
	if (dest < src) {
		//前->后
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	else {
		//后->前
		while (count--) {
			*((char*)dest + count) = ((char*)src + count);
		}
	}
	return ret;
}
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1,sizeof(arr1));
//	struct S arr3[] = { {"zhangsan",20},{"lisi",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}
//memcpy 只处理 不重叠的内存拷贝
//memmove 处理重叠内存的拷贝
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//my_memcpy(arr+2,arr,20);
	memmove(arr + 2, arr, 20);//处理内存重叠的情况
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

