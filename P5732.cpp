#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 21
int main() {
	int a[N][N],n;
	for (int i = 0; i <= 20; i++)
		for (int j = 0; j <= 20; j++)
			a[i][j] = 1;
	scanf("%d", &n);
	for (int i =3; i <= n; i++)
		for (int j = 2; j <= i-1; j++)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}