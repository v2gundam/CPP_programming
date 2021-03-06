// 013UsingDcl1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

namespace Hybrid
{
	int test_val = 1234;
	int test_val2 = 4567;
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
		std::cout << "한글 테스트" << std::endl;
	}
}

int main()
{
	using Hybrid::HybFunc;
	using Hybrid::test_val;
	using Hybrid::test_val2;
	HybFunc();
	std::cout << "변수 선언 테스트" << std::endl;
	std::cout << test_val + test_val2 << std::endl;
	return 0;
}

