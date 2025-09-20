#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int pow(int n);
int len(int n);
int pow(int n) {
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s *= 10;
	}
	return s;
}
int len(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n / pow(i - 1) != 0) s++;
		else break;
	}
	return s;
}
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++) {

	}
	return 0;
}