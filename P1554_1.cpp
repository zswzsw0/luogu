#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int pow(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
		s *= 10;
	return s;
}
int main() {
	int m, n, a[10] = {0};
	scanf("%d%d", &m, &n);
	for (int i = m; i <= n; i++) {
		int j = 0;
		while (i / pow(j) != 0) {
			a[i / pow(j++) % 10]++;
		}
	}
	for (int i = 0; i <9; i++) {
		printf("%d ", a[i]);
	}
	printf("%d", a[9]);
	return 0;
}