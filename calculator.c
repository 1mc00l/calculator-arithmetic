#include <stdio.h>

int main() {
	char operator;	
	int num1;
	int num2;
	
	printf("(+, -, /)\n\n");
	
	printf("operator: ");	
	scanf("%c", &operator);
	
	printf("\nnumber 1: ");	
	scanf("%d", &num1);
	
	printf("\nnumber 2: ");		
	scanf("%d", &num2);

	printf("%c, %d, %d", operator, num1, num2);	
	
	return 0;
}
