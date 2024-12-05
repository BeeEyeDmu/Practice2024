// 079_classTemplate.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

template <typename T>
class Vector2 {
private:
    T x, y;
public:
    Vector2(T x, T y) : x(x), y(y){}
    T GetX() { return x; }
    T GetY() { return y; }
};

int main()
{
    Vector2<int> v1(1, 3);
    Vector2<double> v2(1.5, 3.5);

    cout << v1.GetX() << ", " << v1.GetY() << endl;
    cout << v2.GetX() << ", " << v2.GetY() << endl;
}
