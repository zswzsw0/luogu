#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	char word[52] ;
	scanf("%d", &n);
	getchar();
	int i = 0;
	while ((word[i] = getchar()) != '\n') {
		if ((word[i] + n) >= 'a' && (word[i] + n) <= 'z') {
			word[i] = word[i] + n;
		}
		else word[i] = 'a' + word[i] + n-'z'-1;
		i++;
	}
	word[i] = '\0';
	printf("%s", word);
	return 0;
}