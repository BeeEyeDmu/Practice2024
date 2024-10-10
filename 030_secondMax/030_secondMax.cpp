#include <stdio.h>

int main()
{
	int a[10];
	int max, max2;

	printf("10개 숫자 입력 : ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}

	// max와 second max를 찾아라
	max = max2 = a[0];

	for (int i = 1; i < 10; i++) {
		if (a[i] > max) {
			max2 = max;
			max = a[i];
		}
		else if (a[i] > max2) {
			max2 = a[i];
		}
		printf("i=%d : max = %d, max2 = %d\n", i, max, max2);
	}

	printf("max = %d, max2 = %d\n", max, max2);
}