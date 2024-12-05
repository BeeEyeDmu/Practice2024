// 080_tryCatch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double area;

    try {
        cout << "면적 입력 : ";
        cin >> area;
        if (area < 0)
            throw(area);
        cout << sqrt(area) << endl;
    }
    catch (double e) {
        cout << e << ": 면적은 0보다 크거나 같아야 합니다." << endl;
    }
}
