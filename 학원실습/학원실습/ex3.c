#include <stdio.h>

int main(void)
{
	float num1, num2;
	float sum, min, mul, div;

	printf(" �� �Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%f %f", &num1, &num2);

	sum = num1 + num2;
	printf("�� �Ǽ��� ��:%f\n", sum);

	min = num1 - num2;
	printf("�� �Ǽ��� ��:%f\n", min);

	mul = num1 * num2;
	printf("�� �Ǽ��� ��:%f\n", mul);

	div = num1 / num2;
	printf("�� �Ǽ��� ������:%f\n",div);

	return 0;
}
