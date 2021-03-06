// Q02-1-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void SwapPointer(int *(&ptr1), int *(&ptr2))
{
	int *temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

int main()
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "ptr1: " << ptr1 << endl;
	cout << "ptr2: " << ptr2 << endl;
	cout << "ptr1 value: " << *ptr1 << endl;
	cout << "ptr2 value: " << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);
	
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "ptr1: " << ptr1 << endl;
	cout << "ptr2: " << ptr2 << endl;
	cout << "ptr1 value: " << *ptr1 << endl;
	cout << "ptr2 value: " << *ptr2 << endl;


	return 0;
}

