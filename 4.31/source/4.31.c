#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j,a=1,b=4;
	for (i = 0;i < 9;i++) {
		for (j = 0;j < b;j++) {
			printf(" ");
		}
		for (j = 0;j < a;j++) {
			printf("*");
		}
		if (i < 4) {
			a =a+2;
			b--;
		}
		else {
			a = a - 2;
			b++;
		}
		printf("\n");

	}
	system("pause");
	return 0;
}