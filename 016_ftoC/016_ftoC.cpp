#include <stdio.h>

int main()
{
	// 반복 : 시작값-반복조건-변화량
	// 화씨(f)를 섭씨(c)로 문제의 반복
	
	// 시작 : f = 100
	// 반복조건 : f >= 0
	// 변화량 : f = f - 10 (f -= 10)

	printf("섭씨\t화씨\n");
	printf("==================\n");

	for (int f = 100; f >= 0; f -= 10) {
		float c = (5. / 9) * (f - 32);
		printf("%3d\t%4.1f\n", f, c);
	}

	printf("섭씨\t화씨\n");
	printf("==================\n");

	// for(시작; 반복조건; 변화량)
	for (int f = 0; f <= 100; f += 10) {
		float c = (5. / 9) * (f - 32);
		printf("%3d\t%5.1f\n", f, c);
	}
}