#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char a[4][9] = { "adgjmptw","behknqux","cfilorvy","sz" };
	char b[201],c;
	int i = 0,s=0;
	while ((b[i] = getchar()) != '\n') {
		if (b[i] == ' ') {
			s++;
		}
		else for (int j = 0; j < 4; j++) {
			
			for (int k = 0; k < 8; k++) {
				c = a[j][k];
				if (a[j][k] == b[i]) {
					
					s = s + j + 1;
					goto END;
				}
			}
		}
		END:
		i++;
	}
	printf("%d", s);
	return 0;
}