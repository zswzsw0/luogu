#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Max 21
int max(int a, int b) {
	return (a > b) ? a : b;
}
int min(int a, int b) {
	return (a < b) ? a : b;
}
void bb(int (&a)[Max][Max][Max], int x1, int y1, int z1, int x2, int y2, int z2)
{
	for (int i = min(x1,x2); i <= max(x1,x2); i++)
		for (int j = min(y1, y2); j<= max(y1, y2); j++)
			for (int k = min(z1, z2); k <= max(z1, z2); k++)
				a[i][j][k] = 0;
}
int main() {
	int s=0,n, a[Max][Max][Max],w,x,h,q,  x1,  y1,  z1,  x2,  y2, z2;
	scanf("%d%d%d", &w, &x, &h);
	for (int i = 1; i <= w; i++)
		for (int j = 1; j <= x; j++)
			for (int k = 1; k <= h; k++)
				a[i][j][k] = 1;
	scanf("%d", &q);
	for (int i = 1; i <= q; i++) {
		scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
		bb(a, x1, y1, z1, x2, y2, z2);
	}
	for (int i = 1; i <= w; i++)
		for (int j = 1; j <= x; j++)
			for (int k = 1; k <= h; k++)
			{
				if (a[i][j][k] == 1)s++;
			}
	printf("%d", s);
	return 0;
}