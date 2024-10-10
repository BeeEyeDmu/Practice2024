#include <stdio.h>

int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	// (6)
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= n - i; j++)
			printf("_");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}