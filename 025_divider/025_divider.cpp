#include <stdio.h>

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d ", i);
	printf("\n");
}