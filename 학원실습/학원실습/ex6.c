#include <stdio.h>

int main(void)
{
	const double pi = 3.14;
	const int max =100;

	printf("pi =%lf\n", pi);
	printf("max = %d\n", max);

	 pi = 3.1415; //const변수라서 변경이되지 않는다.

	 


}