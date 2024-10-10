#include <stdio.h>

int main()
{
	int n1, n2, n3;
	int sum = 0;

	scanf_s("%d %d %d", &n1, &n2, &n3);

	for (int i = n1; i <= n2; i++) {
		if (i % n3 == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("%d부터 %d까지 %d의 배수의 합 : %d\n", n1, n2, n3, sum);
}