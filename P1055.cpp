#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char a[20] = {0};
	int i = 0,j=0,s=0;
	int b[12] = {0};
	while ((a[i++] = getchar()) != '\n'){
		if (a[i - 1] != '\n' && a[i - 1] != '-')
			b[j++] = a[i - 1] - '0';
	}
	for (int i = 0; i < 9; i++) {
		s = s + b[i] * (i+1);
	}
	if (s % 11 == b[9])printf("Right");
	else {
		a[12] = (s % 11)+'0';
		a[13] = '\0';
		printf("%s", a);
	}
	return 0;
}