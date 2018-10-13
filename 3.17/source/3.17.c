#include<stdio.h>
#include<stdlib.h>
int main() {
	float a,sum,e,c;
	int  b, d;
	while (1) {
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &b);
		if (b != -1) {
			printf("Enter beginning balance :");
			scanf_s("%f", &a);
			printf("Enter total charges :");
			scanf_s("%f", &c);
			printf("Enter total credits :");
			scanf_s("%d", &d);
			printf("Enter credits limits :");
			scanf_s("%f", &e);
			sum = a + c - d;
			printf("Account : %d \n", b);
			printf("Credit limit : %f \n", e);
			printf("Balabce : %f \n", sum);
			if (sum > e)
				printf("Credit limit exceeded . \n");
		}
		else {
			break;
			
		}
		printf("\n");
	}
	system("pause");
	return 0;
	
}