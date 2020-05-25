#include <stdio.h>

int main(void)
{
	int a = 10;
	int b;

	b = a << 2;
	printf("a<<2 = %08x(%d)\n", b, b);

	b = a >> 2;
	printf("a>>2 =%08x(%d)\n", b, b);

	return 0;


}