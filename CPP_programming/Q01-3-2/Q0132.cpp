// Q0132.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//


/*
함수 오버로딩에 문제 발생
동일 한 이름의 함수가 두개 있고 한개는 void형이며 한개는 매개변수를 이어받는 형태이다.
하지만 매개변수를 이어받는 형태의 함수에는 Default값을 선언하였으므로
인수가 없을 경우에도 실행 가능한 형태의 함수이다.
따라서 인수가 없을 경우, 두 개의 함수 중 어느것을 실행해야 하는지 확인 할 수가 없다.
*/


#include "stdafx.h"
#include <iostream>

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc()
{
	return 10;
}

int main()
{
    return 0;
}

