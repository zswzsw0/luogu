#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define M 5
int main() {
	int len=3,i=0;
	int* a = (int*)malloc(M *sizeof(int));
	while ( a[i++] != 0)
	{
		scanf("%d", &a[i]);
		int* p = (int*)realloc(a, (M + len) * sizeof(int));
		a = p;
		//free(p);
		/*不要再 free(p) 的原因：
          1.p 和 a 现在指向同一块内存，二次释放就是 double-free，会直接触发运行时错误（崩溃）。
          2.内存只需要归还给系统一次；realloc 本身不会替你“额外”申请一块需要单独释放的内存。
          3.以后无论再 realloc 多少次，始终只保留一个活指针，最后 free(这个指针) 一次即可。
		*/
		len++;
	
	}
	for (int j = i-2; j >= 2; j--) {
		printf("%d ", a[j]);
	}
	printf("%d", a[1]);
	free(a);
	return 0;
}