#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, a,s=0,step=0,i,j;
	scanf("%d", &n);
	int* p = (int*)calloc((n * n+1),sizeof(int));
	if (!p) {
		return 1;
	}
	do {
		scanf("%d", &a);
		int flag = (step++) % 2;
		for (int i = 1+s; i <= a+s; i++)
		{
			p[i] = flag;
		}
		s += a;
	} while (s != n * n);
	int k = 1;
	for (i = 1; i <= n; i++) {
		for (j = 1; j < n; j++) {
			printf("%d ", p[k++]);
		}
		(i*j!=n*n)?printf("%d\n", p[k++]): printf("%d", p[k++]);
	}
	free(p);
	return 0;
}