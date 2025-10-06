#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct{
	int x;
	int y;
}Site;
int main() {
	int n, m, k, site[104][104] = {0},s=0;
	Site a[26], b[6];
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d%d", &a[i].x, &a[i].y);
		a[i].x += 2;
		a[i].y += 2;
	}
	for (int i = 1; i <= k; i++)
	{
		scanf("%d%d", &b[i].x, &b[i].y);
		b[i].x += 2;
		b[i].y += 2;
	}
	for (int i = 1; i <= m; i++) {
		for (int j = a[i].x - 2; j <= a[i].x + 2; j++)
			site[j][a[i].y] = 1;
	    for (int l = a[i].y - 2; l <= a[i].y + 2; l++)
			site[a[i].y][l] = 1;
		for (int j = a[i].x - 1; j <= a[i].x + 1; j++)
			for (int l = a[i].y - 1; l <= a[i].y + 1; l++)
				site[j][l] = 1;
		
	}
	for (int i = 1; i <= k; i++) {
		for (int j = b[i].x - 2; j <= b[i].x + 2; j++)
			for (int l = b[i].y - 2; l <= b[i].y + 2; l++)
				site[j][l] = 1;
	}
	for (int i = 3; i <= n+2; i++) {
		for (int j = 3; j <= n+2; j++) {
			if (site[i][j] == 0) s++;
		}
	}
	printf("%d", s);
	return 0;
}