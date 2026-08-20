#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Enter first number: ");
	if (scanf("%d", &a) != 1) {
		printf("Invalid input\n");
		return 1;
	}

	printf("Enter second number: ");
	if (scanf("%d", &b) != 1) {
		printf("Invalid input\n");
		return 1;
	}

	int sum = a + b;
	printf("Sum: %d\n", sum);
	return 0;
}

