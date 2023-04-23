#include<iostream>
#include<string.h>
#pragma  warning (disable:4996) //strcat()函数不安全
int main() {
	char a[100] = { NULL };
	gets(a);
	int line = 0;
	for (int i = 0; a[i] != '\0'; i++)
		line++;
	char del, b[100];
	std::cin >> del;
	for (int i = 0; i < line; i++) {
		if (a[i] == del) {
			strcpy(b, a + i + 1);//strcpy()函数不安全
			a[i] = '\0';
			strcat(a, b);
//			break;
		}
	}
	std::cout<<a;
	std::cout << "未找到该字符";
	return 0;
}
