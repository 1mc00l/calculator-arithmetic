#include <stdio.h>

int main() {
	char operator;	
	int num1, num2;
	float res;
	
	printf("(+, -, *, /)\n\n");
	
	printf("operator: ");	
	scanf("%c", &operator);
	
	while(operator != '+' && operator != '-' && operator != '*' && operator != '/') {
		printf("Wrong operator, try again: ");	
		scanf(" %c", &operator);
	}
	
	printf("\nnumber 1: ");	
	scanf("%d", &num1);
	
	printf("\nnumber 2: ");		
	scanf("%d", &num2);
	
	switch (operator)
	{
		case '+':
			res = num1 + num2;
			printf("\nAnswer: %.2f", res);
			break;
		case '-':
			res = num1 - num2;
			printf("\nAnswer: %.2f", res);
			break;
		case '*':
			res = num1 * num2;
			printf("\nAnswer: %.2f", res);
			break;
		case '/':
			res = num1 / num2;
			printf("\nAnswer: %.2f", res);
			break;
	}	
	
	return 0;
}
