#include<stdio.h>
#include<stdlib.h>
int main() {
	float sum,a;
	//printf("Enter sales in dollars : ");
	//scanf_s("%f", &a);
	while (1) {
		printf("Enter sales in dollars : ");
		scanf_s("%f", &a);
		if (a == -1) {
			break;
		}
		sum = 200 + a * 9 / 100;
		printf("%f \n", sum);
		printf("\n");
	}
	system("pause");
	return 0;

}


