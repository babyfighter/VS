#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main() {
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL) {
//		return 0;
//	}
//	//write
//	fputc('h', pfRead);
//	//read
//	fgetc(pfRead);
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main() {
//	char buf[1024] = { 0 };
//	//fgets(buf,1024,stdin)//从标准输入流读取
//	//fputs(buf, stdout);//输出到标准输出流
//
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}

//struct S {
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main() {
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	//格式化输入数据
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),&(s.arr));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S {
//	int n;
//	float score;
//	char arr[10];
//};
//int main() {
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	//格式化输出数据
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

/*
	scanf/printf:针对标准输入流/标准输出流 的格式化输入/输出语句
	fscanf/fprintf：针对所有输入流/输出流 的格式化/输入输出语句
	sscanf/sprintf：格式化数据转化成string/从格式化数据中打印
*/
//struct S {
//	int n;
//	float score;
//	char arr[10];
//};
//int main() {
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串存到buf
//	sprintf(buf, "%d %.2f %s", s.n, s.score, s.arr);
//	//从buf中读取格式化的数据到tmp
//	sscanf(buf, "%d %.2f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	fclose(buf);
//	buf = NULL;
//	return 0;
//}

//ftell：定位
//fseek：定位文件指针
//rewind
//feof:判断文件是读取失败结束还是遇到结尾结束
//		*不能当作文件结尾的判断
//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	//1. 定位文件指针
//	fseek(pf, -2, SEEK_END);
//	int pos = ftell(pf);
//	printf("%d",pos );
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	int ch = fgetc(pf);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main() {
	
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL) {
		//perror -自定义信息
		perror("Error Info");
		return 0;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF) {
		putchar(ch);
	}
	if (ferror(pf)) {
		printf("error\n");
	}
	else if (feof(pf)) {
		printf("End of file \n");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}