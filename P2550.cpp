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
	for (int i = 1; i <= n; i++) {//֮ǰ����д����for (int i = 1; i <= 7; i++)
		/*
		�����±� 1-7 û���⣬�� b �ġ���һά���±�д���� 1-7
        ���� main ������� b[1..n][1..7]��ȴ��ͳ��ѭ����ֻɨ�� b[1..7][1..7]����
        һ�� n>7������ n-7 �Ų�Ʊ�ͱ���ȫ���ԣ�
        һ�� n<7���ֻ��δ��ʼ�����У�b[n+1..7]����ȥ�� a �Ƚϣ��õ������������
        �� ͳ�ƽ��ȫ�̴���
		*/
		c[aa(a,b[i])]++;
	}
	for (int i = 7; i >=2; i--) {
		printf("%d ", c[i]);
	}
	printf("%d", c[1]);
	return 0;
}