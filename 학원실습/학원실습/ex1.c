
#include <stdio.h>

int main(void)
{
	float num;
	int i_part;
	float f_part;

	printf(" �Ǽ��� �Է��ϼ��� :");
	scanf_s("%f", &num);

	i_part = num;
	f_part = num - i_part;

	printf("%f�� �����δ� %d�̰�, �Ǽ��δ� %f�Դϴ�. \n", num, i_part, f_part);

	return 0;
}