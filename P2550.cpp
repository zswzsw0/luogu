#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Max 1001
int aa(int* a, int*b)
{
	int s = 0;
	for(int i=1;i<=7;i++)
		for (int j = 1; j <= 7; j++) {
			if (a[i] == b[j]) { s++; break; }
		}
	return s;
}
int main() {
	int n, a[8]={0}, b[Max][8] = {0}, c[8] = {0};
	scanf("%d", &n);
	for (int i = 1; i <= 7; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 7; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {//之前错误写法：for (int i = 1; i <= 7; i++)
		/*
		数组下标 1-7 没问题，但 b 的“第一维”下标写死了 1-7
        你在 main 里读入了 b[1..n][1..7]，却在统计循环里只扫了 b[1..7][1..7]——
        一旦 n>7，后面 n-7 张彩票就被完全忽略；
        一旦 n<7，又会把未初始化的行（b[n+1..7]）拿去和 a 比较，得到随机命中数。
        → 统计结果全盘错误。
		*/
		c[aa(a,b[i])]++;
	}
	for (int i = 7; i >=2; i--) {
		printf("%d ", c[i]);
	}
	printf("%d", c[1]);
	return 0;
}