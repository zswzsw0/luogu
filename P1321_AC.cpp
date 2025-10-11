#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[300];
	int boy = 0, girl = 0;
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == 'b' || a[i + 1] == 'o' || a[i + 2] == 'y')
		{
			boy++;
		}
		else if (a[i] == 'g' || a[i + 1] == 'i' || a[i + 2] == 'r' || a[i + 3] == 'l') {
			girl++;
		}
	}
	printf("%d\n%d", boy, girl);
	return 0;
}