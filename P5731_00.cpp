#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[11][11] = {0};
	int n, step = 2, x = 1,y=1;
	scanf("%d", &n);
	a[1][1] = 1;
	while (step <= n*n) {
		while (x + 1 <= n && a[x + 1][y] == 0) {
			a[x + 1][y] = step;
			x++;
			step++;
		}
		while (y + 1 <= n && a[x][y+1] == 0) {
			a[x][y+1] = step;
			y++;
			step++;
 		}
		while (x-1>=1 && a[x-1][y] == 0) {
			a[x -1][y] = step;
			x--;
			step++;
		}
		while (y -1 >=1 && a[x][y-1] == 0) {
			a[x][y-1] = step;
			y--;
			step++;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%3d", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}