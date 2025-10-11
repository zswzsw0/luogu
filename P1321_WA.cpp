#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[300];
	int boy = 0, girl = 0;
	scanf("%s", a);
	int i = 0;
	while (i < strlen(a)) {
		switch (a[i]) {
		case 'b':boy++;
			i = i + 3;
			break;
		case 'o':boy++;
			i = i + 2;
			break;
		case 'y':boy++;
			i = i + 1;
			break;
		case 'g':girl++;
			i = i + 4;
			break;
		case 'i':girl++;
			i = i + 3;
			break;
		case 'r':girl++;
			i = i + 2;
			break;
		case 'l':girl++;
			i = i + 1;
			break;
		default:i++;
			break;
		}
	}
	printf("%d\n%d", boy, girl);
	return 0;
}