#include<iostream>
#include<string.h>
#pragma  warning (disable:4996) //strcat()��������ȫ
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
			strcpy(b, a + i + 1);//strcpy()��������ȫ
			a[i] = '\0';
			strcat(a, b);
//			break;
		}
	}
	std::cout<<a;
	std::cout << "δ�ҵ����ַ�";
	return 0;
}
