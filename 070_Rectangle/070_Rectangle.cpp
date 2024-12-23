// 070_Rectangle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point() { 
		x = 0; 
		y = 0; 
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setX(int x) {
		this->x = x;
	}
	int getX() {
		return x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY() {
		return y;
	}
};

class Rectangle {
private:
	Point p1, p2;
public:
	Rectangle() {
		p1 = Point();
		p2 = Point();
	}
	Rectangle(Point p1, Point p2) {
		this->p1 = p1;
		this->p2 = p2;
	}
	int GetArea() {
		return abs(p2.getX() - p1.getX()) * abs(p2.getY() - p1.getY());
	}
};

int main()
{
	int x, y;

	cout << "점의 좌표를 입력 : ";
	cin >> x >> y;

	Point p1(x, y);

	cout << "점의 좌표를 입력 : ";
	cin >> x >> y;

	Point p2(x, y);

	Rectangle r(p1, p2);

	cout << "사각형의 면적은 : " << r.GetArea() << endl;
}
