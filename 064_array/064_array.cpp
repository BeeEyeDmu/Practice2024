// 064_array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int a[10];

	cout << "10개 숫자 입력 : ";
	for (int i = 0; i < 10; i++)
		cin >> a[i];

	// int min = INT_MAX, max = INT_MIN, sum = 0;
	int min = a[0], max = a[0], sum = 0;
	for (int x : a) {
		if (x < min)
			min = x;
		if (x > max)
			max = x;
		sum += x;
	}

	cout << "최소값 = " << min << endl;
	cout << "최대값 = " << max << endl;
	cout << "평균 = " << sum / 10.0 << endl;
}
