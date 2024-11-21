// 065_cycle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void cycle(int& x, int& y, int& z) {
    int tmp = x;
    x = y;
    y = z;
    z = tmp;
}

int main()
{
    int x, y, z;

    cout << "세개 숫자 입력 : ";
    cin >> x >> y >> z;

    cycle(x, y, z);

    cout << x << ", " << y << ", " << z << endl;
}
