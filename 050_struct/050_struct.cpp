#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
};

struct rectangle {
	point p1;
	point p2;
};

double distance(point p1, point p2);
int area(point p1, point p2);
int rectArea(rectangle r);

int main()
{
	// 51번 문제) 두 점의 좌표를 입력받고 거리를 계산하는 distance() 함수를 만드시오
	point p1, p2;


	printf("한 점의 좌표(x, y) : ");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("한 점의 좌표(x, y) : ");
	scanf_s("%d %d", &p2.x, &p2.y);

	// 51번 문제 : 두 점 사이의 거리 구하기
	printf("(%d, %d)-(%d,%d)의 거리 = %f\n",
		p1.x, p1.y, p2.x, p2.y, distance(p1, p2));

	// 52번 문제 : 사각형 면적 구하기
	rectangle r;
	r.p1 = p1;
	r.p2 = p2;
	printf("(%d, %d)-(%d,%d)의 면적 = %d\n", 
		p1.x, p1.y, p2.x, p2.y, area(p1, p2));
	printf("(%d, %d)-(%d,%d)의 면적 = %d\n",
		p1.x, p1.y, p2.x, p2.y, rectArea(r));
}

int rectArea(rectangle r)
{
	return abs(r.p2.x - r.p1.x) * abs(r.p2.y - r.p1.y);
}

int area(point p1, point p2)
{
	return abs(p2.x - p1.x) * abs(p2.y - p1.y);
}

double distance(point p1, point p2) 
{
	//return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	return sqrt((p2.x - p1.x)*(p2.x - p1.x) + 
		(p2.y - p1.y)* (p2.y - p1.y));
}