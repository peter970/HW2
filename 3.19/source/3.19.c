#include<stdio.h>
#include<stdlib.h>
int main() {
	float  rate,interest;
	int day,loan;
	while (1) {
		printf("Enter loan principle (-1 to end): ");
		scanf_s("%d", &loan);
		if (loan != -1) {
			printf("Enter interest rate : ");
			scanf_s("%f", &rate);
			printf("Enter term of the loan in days : ");
			scanf_s("%d", &day);
			interest = loan * rate * day / 365;
			printf("The interest charge is $%.2f \n", interest);
		}
		else {
			break;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}