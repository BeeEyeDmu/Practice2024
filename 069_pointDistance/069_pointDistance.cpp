// 069_pointDistance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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
	double distance(Point p) {
		return sqrt((p.x - x) * (p.x - x) + (p.y - y) * (p.y - y));
	}
};

int main()
{
	Point p3;
	Point p4(10, 10);

	cout << "(" << p3.getX() << ", " << p3.getY() << ")\n";
	cout << "(" << p4.getX() << ", " << p4.getY() << ")\n";
	cout << "거리 : " << p3.distance(p4) << endl;
 }