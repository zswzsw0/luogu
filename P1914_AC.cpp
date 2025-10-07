#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char a[100];
	scanf("%d%s", &n, a);
	for (int i = 0; a[i]!='\0'; i++) {
		printf("%c", (((a[i] + n) <= 'z') ? (a[i] + n) : (a[i] + n - 'z' -1+ 'a')));
	}
	return 0;
}