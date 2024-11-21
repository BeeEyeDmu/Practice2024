#include <stdio.h>

int main()
{
	int x;

	scanf_s("%d", &x);

	printf("x = %d\n", x);
	printf("(1 << 2) = %d\n", 1 << 2);
	printf("%d\n", x & (1 << 2));

	printf("아래 4자리 = %d\n", x & 15);

	for (int i = 1; i <= 4; i++)
		printf("%d번 시프트 : %d\n",i, x << i);
}