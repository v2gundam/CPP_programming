// Q0111.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>



int main()
{
	int sum=0;

	for (int i = 0; i < 5; i++)
	{
		int d_temp;
		std::cout << i << "번째 정수 입력: ";
		std::cin >> d_temp;
		sum = sum + d_temp;
	}
	
	std::cout << sum << std::endl;

	return 0;
}

