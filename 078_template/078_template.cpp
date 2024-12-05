// 078_template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

template<typename T>
T Sum(T a[], int n) {
    T sum = a[0];
    for (int i = 1; i < n; i++)
        sum += a[i];
    return sum;
}

int main()
{
    int a[5] = { 3, 1, 5, 1, 4 };
    double b[5] = { 2.3, 4.5, 6.5, 7.6, 3.8 };
    string c[3] = { "Hello", "World", "Doodle" };

    cout << Sum<int>(a, 5) << endl;
    cout << Sum<double>(b, 5) << endl;
    cout << Sum<string>(c, 3) << endl;
}

