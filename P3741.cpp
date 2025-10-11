#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Max(int a, int b) {
	return (a > b) ? a : b;
}
int aa(char* p) {
	int s = 0;
	for (int i = 0; i < strlen(p)-1; i++) {
		if (p[i] == 'V' && p[i + 1] == 'K')
			s++;
	}
	return s;
}
int main() {
	int n,t=0;
	scanf("%d", &n);
	char* p = (char*)malloc(n * sizeof(char));
	char* q = (char*)malloc(n * sizeof(char));
	scanf("%s", p);
	t = aa(p);
	for (int i = 0; i < n; i++) {
		memcpy(q, p, n * sizeof(char));
		q[i] = (q[i] == 'K') ? 'V' : 'K';
		t = Max(t, aa(q));
	}
	printf("%d", t);
	return 0;
}