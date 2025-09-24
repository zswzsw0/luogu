#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Max 1001
int aa(int a, int b) {
	return (a > b) ? (a - b) : (b - a);
}
typedef struct {
	int a;
	int b;
	int c;
	int sum;
}Student;
int main() {
	Student a[Max];
	int n,s=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d", &a[i].a, &a[i].b, &a[i].c);
		a[i].sum = a[i].a + a[i].b + a[i].c;
	}
	for (int i = 1; i <= n-1; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (aa(a[i].a, a[j].a) <= 5 && aa(a[i].b, a[j].b) <= 5 && aa(a[i].c, a[j].c) <= 5 && aa(a[i].sum, a[j].sum) <= 10)s++;
		}
	}
	printf("%d", s);
	return 0;
}