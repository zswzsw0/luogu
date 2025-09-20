#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void aa(int n) {
	for (int i = 1; i < n; i++)printf("  ");
}
int main() {
	int n,s=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for (int j = 1; j <= n; j++)
		{
			s++;
			(s < 10) ? printf("0%d", s) : printf("%d",s);
		}
		printf("\n");
	}
	printf("\n");
	s = 0;
	for (int i = 1; i <= n; i++) {
		aa(n - i+1);
		for (int j = 1; j <= i; j++)
		{
			s++;
			(s < 10) ? printf("0%d", s) : printf("%d", s);
		}
		printf("\n");
	}
	return 0;
}