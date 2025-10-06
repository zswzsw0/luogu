#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<climits>
int min(int a, int b) {
	return (a < b) ? a : b;
}
int max(int a, int b) {
	return (a > b) ? a : b;
}
int main() {
	int s1, s2, s3, a[81] = {0},Min=INT_MAX,Max=INT_MIN;
	scanf("%d%d%d", &s1, &s2, &s3);
	for(int i=1;i<=s1;i++)
		for(int j=1;j<=s2;j++)
			for (int k = 1; k <= s3; k++) {
				a[i + j + k]++;
				Max=max(Max, a[i + j + k]);
			}
	for (int i = 1; i <= 80; i++) {
		if (a[i] == Max)Min = min(Min, i);
	}


	printf("%d", Min);
	return 0;
}