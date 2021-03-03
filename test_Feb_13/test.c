#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
//int main() {
//	int ch = 0;
//	while (ch = getchar() != EOF) {
//		putchar(ch);
//	}
//	return 0;
//}

//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("Enter pwd: ");
//	scanf("%s", password);//scanf读取空格前的字符
//	//缓冲区还会剩余一个\n 读取一下'\n'	
//	while ((ch = getchar()) != '\n') { ; }
//
//	printf("Confirm(Y/N): ");
//	ret = getchar();
//
//	if (ret == 'Y') //C中单个string用单引号
//	{
//		printf("Confirmed\n");
//	}
//	else 
//	{
//		printf("Cancel\n");
//	}
//	return 0;
//}

//int main() {
//	//判断条件省略的话，则恒为正
//	for (int i = 1; i < 11; i++)
//	{
//		printf("%d", i);
//	}
//	return 0 ;
//}

//int main() {
//	int i = 0;
//	int k = 0;
//	//k=0为假 循环0次
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main() {
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//阶乘之和
//int main() {
//
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	//scanf("%d", &n);
//	for(n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//(有序)数组中找到元素
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("%d\n", i);
//			break;
//		}
//		else {
//			printf("NoSuchElement");
//			break;
//		}
//	}
//	return 0;
// }

//二分法
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int v = 2;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	//printf("%d\n", sizeof(arr));//数组大小(内存) 40bytes
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > v) {
//			right = mid - 1;
//		}	
//		else if (arr[mid] < v) {
//			right = mid + 1;
//		}
//		else {
//			printf("%d", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("NoSuchEle");
//	}
//	return 0;
//}

#include<windows.h>
#include<stdlib.h>
//int main() {
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;//数组末尾有/0
//	int right = strlen(arr1) - 1;
//	while (left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	char password[20] = {0};
//	for(i = 0; i < 3; i++) {
//		printf("Enter Password: ");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) {//比较字符串是否相等strcmp
//			printf("Logged in");
//			break;
//		}
//		else {
//			printf("Wrong\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码错误，退出\n");
//	return 0;
//}