#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	char word[101], b;
	int i = 0;
	while ((word[i] = getchar()) != '\n') {
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			word[i] = word[i] - ('a' - 'A');
		}
		i++;
	}
	word[i] = '\0';
	printf("%s", word);
	return 0;
}