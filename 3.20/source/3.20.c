#include<stdio.h>
#include<stdlib.h>
int main() {
	float sum,rate;
	int hours;
	while (1) {
		printf("Enter # of hours worked (-1 to end) : ");
		scanf_s("%d",&hours);
		if (hours == -1) {
			break;
		}
		printf("Enter hourly rate of the work($00.00) : ");
		scanf_s("%f", &rate);
		sum = hours * rate ;
		if(hours>40)
			sum =40 * rate + (hours - 40)*rate*1.5;
		printf("Salary is %.2f \n", sum);
	}


	system("pause");
	return 0;
}