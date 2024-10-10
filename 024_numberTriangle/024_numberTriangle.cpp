#include<stdio.h>

int main()
{
	int n;

	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("%d ", j);
		printf("\n");
	}

}