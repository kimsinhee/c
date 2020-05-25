#include <stdio.h>

int main(void)
{
	float num1, num2;
	float sum, min, mul, div;

	printf(" 두 실수를 입력하시오:");
	scanf_s("%f %f", &num1, &num2);

	sum = num1 + num2;
	printf("두 실수의 합:%f\n", sum);

	min = num1 - num2;
	printf("두 실수의 차:%f\n", min);

	mul = num1 * num2;
	printf("두 실수의 곱:%f\n", mul);

	div = num1 / num2;
	printf("두 실수의 나누셈:%f\n",div);

	return 0;
}
