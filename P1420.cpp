#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int max(int a, int b)
{
	return (a > b) ? a : b;
}
int main() {
	int n,s=0,sum=0;
	scanf("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i-1 ] + 1)s++;
		else {
			sum = max(sum, s); 
			s = 0;
		}
	}
	sum = max(sum, s);//如果整个数组都是连续上升的（如 1 2 3 4 5），你没有在中途更新 sum，只在 else 中更新，漏掉最后一段。
	printf("%d", sum+1);
	free(a);
	return 0;
}