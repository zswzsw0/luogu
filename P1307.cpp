#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int pow(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s *= 10;
	}
	return s;
}
int len(int n) {
	int s = 0;
	for (int i = 1; i <=11; i++)
	{
		if (n / pow(i - 1) != 0) s++;
		else break;
	}
	return s;
}
int main() {
	int n, a[12] = {0},m,flag=0;
	scanf("%d", &n);
	(n >= 0) ? m = n : (m = 0 - n, flag = 1);
	for (int i = 1; i <= len(m); i++) {
		a[i] = m / pow(i - 1) % 10;
	}
	int j = 1;
	while (a[j++] == 0) {
	}
	j -= 1;
	if(flag==0){
	for (int i = j; i <= len(m); i++) {
		printf("%d", a[i]);
	}}
	else {
		printf("-");
		for (int i = j; i <= len(m); i++) {
			printf("%d", a[i]);
		}
	}
	return 0;
}