#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int K(double a) {
	return  (int)a;
}
int main() {
	int n, t[5001] = { 0 };
	double a[5001] = {0};
	int s[5001] = { 0 };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lf%d", &a[i], &t[i]);
	}
	int j = 0;
	while (1) {
		for (int i = 50 * j+1; i <=50 * (j + 1); i++) {
			for (int l = 1; l<= n; l++) {
				for (int k = 1; k <= t[i]; k++) {
					if (s[(int)(a[k]) * t[k]] == 0)s[(int)(a[k]) * t[k]] = 1, printf("a[% d] = 1", a[(int)(a[k]) * t[k]]);
					else s[(int)(a[k]) * t[k]] = 0;
					//s[K(a[i]) * t[i]] = (s[K(a[i]) * t[i]] == 0) ? 1 : 0;
				}
			}
		}
		for (int i = 50 * j + 1; i <= 50 * (j + 1); i++)
		{
			if (s[i] == 1)printf("%d", s[i]);
			return 1;
		}
		j++;

	}
	return 0;
}