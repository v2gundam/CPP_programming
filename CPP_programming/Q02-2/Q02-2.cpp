// Q02-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	const int num = 12;

	const int *ptr = &num;
	const int *(&ref) = ptr;

	cout << "num: " << num << endl;
	cout << "ptr: " << *ptr << endl;
	cout << "ref: " << *ref << endl;

	
	return 0;
}

