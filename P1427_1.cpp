#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[101];
	int i = 0;
	scanf("%d", &a[i]);
	while (a[i++] != 0)
	{
		scanf("%d", &a[i]);
	}
	for (int j = i-2; j >=1; j--)
		printf("%d ", a[j]);
	printf("%d", a[0]);
	return 0;
}