﻿#include<stdio.h>

int fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	for (int i = 1; i <= 20; i++)
		printf("%d ", fibo(i));
	printf("\n");
		//printf("fibo(%d) = %d\n", i, fibo(i));
}