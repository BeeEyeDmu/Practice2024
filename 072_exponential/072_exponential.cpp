// 072_exponential.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cmath>
using namespace std;

class Exponential {
private:
	int base, exp;
public:
	Exponential() {	base = 1; exp = 1;	}
	Exponential(int a) { base = a; exp = 1; }
	Exponential(int a, int b) { base = a; exp = b; }
	int getValue() {
		return pow(base, exp);
	}
	int getBase() { return base; }
	int getExp() { return exp; }
	bool equals(Exponential other) {
		if (this->getValue() == other.getValue())
			return true;
		else
			return false;
		//if (base == other.base && exp == other.exp)
		//	return true;
		//else
		//	return false;
	}
};

int main()
{
	Exponential a(4, 2);
	Exponential b(16);
	Exponential c;

	cout << a.getValue() << " " << b.getValue() << " "
		<< c.getValue() << endl;

	cout << "a의 base : " << a.getBase() 
		<< ", exp : " << a.getExp() << endl;

	if (a.equals(b))
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;
}
