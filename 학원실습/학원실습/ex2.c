#include <stdio.h>

int main(void)
{
	int num1, num2;
	int sum, min, mul, div;

	printf("두개의 정수를 입력하세요:");
	scanf_s("%d %d", &num1, &num2);

	sum = num1 + num2;
	printf("두 정수의 합:%d", sum);

	min = num1 - num2;
	printf("두 정수의 차:%d", min);

	mul = num1 * num2;
	printf("두 정수의 곱:%d",mul);

	div = num1 / num2;
	printf("두 정수의 나누기:%d", div);


	return 0;


}