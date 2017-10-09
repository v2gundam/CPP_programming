// 002SimpleAdder.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	printf("test 테스트 test 테스트 \n");
	

	double val1;
	std::wcout << "첫 번째 숫자입력: ";
	std::wcin >> val1;

	double val2;
	std::wcout << "두 번째 숫자입력: ";
	std::wcin >> val2;

	double result = val1 + val2;
	std::wcout << "덧셈결과: " << result << std::endl;
	return 0;
}

