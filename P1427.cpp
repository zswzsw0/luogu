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
		/*��Ҫ�� free(p) ��ԭ��
          1.p �� a ����ָ��ͬһ���ڴ棬�����ͷž��� double-free����ֱ�Ӵ�������ʱ���󣨱�������
          2.�ڴ�ֻ��Ҫ�黹��ϵͳһ�Σ�realloc ���������㡰���⡱����һ����Ҫ�����ͷŵ��ڴ档
          3.�Ժ������� realloc ���ٴΣ�ʼ��ֻ����һ����ָ�룬��� free(���ָ��) һ�μ��ɡ�
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