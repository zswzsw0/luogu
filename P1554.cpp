#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define Initmax 10
int len = 0;
int pow(int n) {
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s *= 10;
	}
	return s;
}
int Len(int n) {
	int i = 0;
	while (n / pow(i) != 0) {
		i++;
	}
	return i;
}
void aa(int* &a, int& n, int& e) {
	len = len + Len(n);
	int* p = (int*)realloc(a, (len + Initmax) * sizeof(int));
	a = p;
	for (int i = Len(n)-1; i>=0; i--) {
		a[e++] = n / pow(i) % 10;
	}
}
int main() {
	int m, n, e = 1, sum[10] = {0};
	int* a = (int*)malloc(Initmax * sizeof(int));
	scanf("%d%d", &m, &n);
	for (int i = m; i <= n; i++) {
		aa(a, i, e);
	}
	for (int i = 1; i < e; i++) {
		sum[a[i]]++;
	}
	for (int i = 0; i <9; i++)
		printf("%d ", sum[i]);
	printf("%d", sum[9]);
	return 0;
}