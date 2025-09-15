#include<stdio.h>
#define PI 3.14
#define W 20000
int main() {
	int h, r,s;
	float l;
	scanf_s("%d%d", &h, &r);
	l = PI * r * r * h;
	if ((int)(W / l) != (float)(W / l))printf("%d", (int)(W / l) + 1);
	else printf("%d", (int)(W / l));

	return 0;
}