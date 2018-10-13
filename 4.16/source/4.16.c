#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, k = 9,l;
	printf("<1> \n");
	for (i = 0;i < 10;i++) {
		for (j = 10;j > 0;j--) {
			if (j > k)printf("*");
			else printf(" ");
		}
		printf("\n");
		k--;
	}
	k = 10;
	printf("<2> \n");
	for (i = 0;i < 10;i++) {
		for (j = 0;j <k;j++) {
			printf("*");
		}
		printf("\n");
		k--;
	}
	k = 10;
	l = 0;
	printf("<3> \n");
	for (i = 0;i < 10;i++) {
		for (j = 0;j < l;j++) {
			printf(" ");
		}
		for (j = 0;j < k;j++) {
			printf("*");
		}
		printf("\n");
		k--;
		l++;
	}
	k = 10;
	l = 0;
	printf("<4> \n");
	for (i = 0;i < 11;i++) {
		for (j = 0;j < k;j++) {
			printf(" ");
		}
		for (j = 0;j < l;j++) {
			printf("*");
		}
		printf("\n");
		k--;
		l++;
	}
	system("pause");
	return 0;
}