#include <stdio.h>

int main(void)
{
	int num1, num2;
	int sum, min, mul, div;

	printf("�ΰ��� ������ �Է��ϼ���:");
	scanf_s("%d %d", &num1, &num2);

	sum = num1 + num2;
	printf("�� ������ ��:%d", sum);

	min = num1 - num2;
	printf("�� ������ ��:%d", min);

	mul = num1 * num2;
	printf("�� ������ ��:%d",mul);

	div = num1 / num2;
	printf("�� ������ ������:%d", div);


	return 0;


}