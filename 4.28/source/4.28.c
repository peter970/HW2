#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	float e, f, g, c, d, sum;
	printf("Enter the mode : ");
	scanf_s("%d", &a);
		switch (a) {
		case 1:
			printf("Enter salary : ");
			scanf_s("%d", &b);
			printf("Weekly Salary is $%d \n", b);
			break;
		case 2:
			printf("Enter hours : ");
			scanf_s("%f", &c);
			printf("Enter salary of per hour : ");
			scanf_s("%f", &e);
			sum = c * e * 7;
			if (c > 40)
				sum = (e * 40 + (c - 40)*e) * 7;
			printf("Weekly Salary is $%f \n", sum);
			break;
		case 3:
			printf("Enter their gross weekly sales : ");
			scanf_s("%d", &d);
			sum = (250 + d * 0.057) * 7;
			printf("Weekly Salary is $%f \n", sum);
			break;
		case 4:
			printf("Enter item : ");
			scanf_s("%f", &f);
			printf("Enter item price : ");
			scanf_s("%f", &g);
			sum = g * f * 7;
			printf("Weekly Salary is $%f \n", sum);
			break;
		}
		system("pause");
		return 0;
}