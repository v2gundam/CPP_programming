// Q02-1-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void adder(int &num)
{
	num++;
}

void neg(int &num)
{
	num = -num;
}

\
int main()
{
	int num = 100;
	cout << "원래 수: " << num << endl;
	adder(num);
	cout << "1 증가: " << num << endl;
	neg(num);
	cout << "음수화: " << num << endl;

	return 0;
}

