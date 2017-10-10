// Q012.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>


void swap(int *num_a, int *num_b)
{
	int num_temp = *num_a;
	*num_a = *num_b;
	*num_b = num_temp;
}

void swap(char *ch_a, char *ch_b)
{
	char num_temp = *ch_a;
	*ch_a = *ch_b;
	*ch_b = num_temp;
}

void swap(double *dbl_a, double *dbl_b)
{
	double num_temp = *dbl_a;
	*dbl_a = *dbl_b;
	*dbl_b = num_temp;
}




int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
	return 0;
}

