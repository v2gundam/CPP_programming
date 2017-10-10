// 005FunctionOverloading.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "Myfunc(int a, int b) called" << std::endl;
}

int main()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}

