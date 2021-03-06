// Q02-1-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}


int main()
{
	int val1 = 10;
	int val2 = 20;
	SwapByRef2(23, 45); // 참조자는 변수에 대해서만 선언이 가능하다. 23, 45는 상수이므로 참조자의 선언이 불가능하다.
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}