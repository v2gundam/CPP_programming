// 011NewDelete.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

char * MakeStrAdr(int len)
{
	//char * str = (char*)malloc(sizeof(char)*len);
	char * str = new char[len];
	return str;
}



int main()
{
	char * str = MakeStrAdr(20);
	strcpy_s(str,sizeof("I am so happy~") , "I am so happy~");
	cout << str << endl;
	delete []str;
	return 0;
}

