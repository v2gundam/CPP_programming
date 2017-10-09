// Q0114.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>



int main()
{
	int num=0;
	std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
	std::cin >> num;
	if (num < 0)
	{
		std::cout << "프로그램 종료" << std::endl;
		return 1;
	}
		
	double total = 50 + (num * 0.12);

	std::cout << "이번 달 급여 : " << total << std::endl;
	return 0;
}

