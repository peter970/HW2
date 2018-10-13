#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	printf("Enter length¡G");
	scanf_s("%d", &a);
	printf("Enter breadth :");
	scanf_s("%d", &b);
	for (int i = 1;i <= a;i++) {
		for (int j = 1;j <= b;j++) {
			if (i == a || i == 1 || j == b || j == 1)printf("+");
			else printf(" ");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}