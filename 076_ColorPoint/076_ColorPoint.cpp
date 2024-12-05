// 076_ColorPoint.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
using namespace std;

class Point {
protected:
    int x, y;
public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    void Set(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void Print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class ColorPoint :public Point {
private:
    string color;
public:
    ColorPoint() : Point(), color("black") {}   // 디폴트 생성자
    ColorPoint(int x, int y, string color) : Point(x, y), color(color) {}
    void SetColor(string color) {
        this->color = color;
    }
    void Print() {
        cout << "(" << x << ", " << y << ") " << color << endl;
    }
};

int main()
{
    Point a(10, 20);
    ColorPoint c(30, 30, "red");

    c.Set(40, 40);
    c.SetColor("blue");

    a.Print();
    c.Print();
}