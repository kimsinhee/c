#include <stdio.h>

int main(void)
{
	int a, b;
	int min, max;

	printf("�ΰ��� ������ �Է��ϼ���:");
	scanf_s("%d %d", &a, &b);

	min = a < b ? a : b;
	max = a > b ? a : b;

	printf("min = %d ,max =%d\n", min, max);

	return 0;

}
