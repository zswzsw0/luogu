#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define Max 10
typedef struct {
	int x;
	int k;
}A;
int week(int x, int k)
{
	int s = 0;
	for (int i = 0; i <= 6; i++) {
		s = s + x + i * k;
	}
	return s;
}
int main() {
	int n,x,k=0;
	A a[101];

	scanf("%d", &n);

	for (int x = 1; x <= 100; x++) {
		while (k++) {
				if (52 * week(x, k) <= n) {
					printf("%d %d\n", x, k);
					break;
			}
		}


	}





	free(a);
	return 0;
}