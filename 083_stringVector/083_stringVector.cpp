// 083_stringVector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// STL : Standard Template Library
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> v;
	string s;

	cout << "문자열 10개 입력 : ";
	for (int i = 0; i < 10; i++) {
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
