#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<climits>//INT_MAX和INT_MIN两个常量
#define Max 3001
int min(int a, int b) {
	return (a < b) ? a : b;
}
int main() {
	int n, m,a[Max],s=0,Min=INT_MAX;
	scanf("%d%d", &n,&m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n - m+1; i++) {
		
		s = 0;
		for (int j = i; j <i + m; j++) {
			s += a[j];
			}
		Min = min(Min, s);
	}
	printf("%d", Min);
	return 0;
}