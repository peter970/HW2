#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, k;
	for (i = 1;i < 501;i++) {
		for (j = 1;j < 501;j++) {
			for (k = 1;k < 501;k++) {
				if (k*k + j * j == i * i)
					printf("%d %d %d \t \n", k, j, i);
			}
		}
	}
	system("pause");
	return 0;
}