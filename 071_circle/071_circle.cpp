// 071_circle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Circle {
private:
    int radius; // 반지름
public:
    Circle() {
        radius = 0;
    }
    Circle(int r) {
        if(r >= 0)
            radius = r;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle donut(5);
    Circle pie(10);
    Circle pizza(15);

    cout << "donut : " << donut.getArea() << endl;
    cout << "pie : " << pie.getArea() << endl;
    cout << "pizza : " << pizza.getArea() << endl;
}
