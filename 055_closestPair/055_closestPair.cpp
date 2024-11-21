// 055_closestPair.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct point {
	int x, y;
};
double distance(point p1, point p2);	// 프로토타입(원형)

int main()
{
	point p[100];

	srand(time(0));
	for (int i = 0; i < 100; i++) {
		p[i].x = rand();
		p[i].y = rand();
	}

	for (int i = 0; i < 100; i++) {
		printf("p[%d] = (%d, %d)\n", i, p[i].x, p[i].y);
	}

	double min = INT_MAX;
	int min1, min2;
	double d;

	// 모든 쌍의 거리를 계산하기 위해 이중반복문 사용
	for(int i=0; i<100; i++)
		for (int j = i + 1; j < 100; j++) {
			d = distance(p[i], p[j]);
			if (d < min) {
				min = d;
				min1 = i;
				min2 = j;
			}
		}

	printf("가장 가까운 점의 쌍 : p[%d]-p[%d]\n", min1, min2);
	printf("가장 가까운 점의 쌍 : (%d, %d)-(%d,%d) = %f\n",
		p[min1].x, p[min1].y, p[min2].x, p[min2].y, min);
}

double distance(point p1, point p2) 
{
	return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}