#include <stdio.h>

int main()
{
	printf("\"강병익\"의 출석점수 계산\n");
	printf("-------------------------\n");
	printf("수업시간\t%5d 시간\n", 60);
	printf("결석시간\t%5d 시간\n", 2);
	printf("출석률\t\t%5.1f %%\n", (60-2)/60.0*100);
	printf("출석점수\t%5.1f 점\n", 15* (60 - 2) / 60.0);
}