// 067_point.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
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

int main()
{
	Point p1, p2;

	p1.setX(10);
	p1.setY(10);

	p2.setX(20);
	p2.setY(20);

	cout << "(" << p1.getX() << ", " << p1.getY() << ")\n";
	cout << "(" << p2.getX() << ", " << p2.getY() << ")\n";
}
