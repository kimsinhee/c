#include <stdio.h>

int main(void)
{
	int score = 95;

	printf("90�� �̻� 100�� �����ΰ�?:%d\n", score >= 90 && score <= 100);

	printf("0�� �Ǵ� 100���ΰ�?:%d\n", score == 0 || score == 100);

	printf("0���ΰ�?:%d\n", !score);
	return 0;

}