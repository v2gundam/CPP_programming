// Q0112.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	char name[100];
	char phonenum[100];

	std::cout << "이름: ";
	std::cin >> name ;

	std::cout << "전화번호: ";
	std::cin >> phonenum ;
	
	std::cout << "입력된 정보 출력" << std::endl;
	std::cout << "이름:" << name << std::endl;
	std::cout << "전화번호: " << phonenum << std::endl;


	return 0;
}

