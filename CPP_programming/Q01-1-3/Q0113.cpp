// Q0113.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int num;
	std::cout << "2에서 9 사이의 숫자 입력 :";
	std::cin >> num;

	for (int i = 0; i < 9; i++)
	{
		int temp_num = (i+1) * num;
		std::cout << num << " x " << (i + 1) << " = " << temp_num << std::endl;
	}
    return 0;
}

