// 은행계좌관리프로그램.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int program_stat = 1;

typedef struct consumer_data
{
	char name;
	int number;
	double money;
}Data;

Data user[];



int main()
{
	while (program_stat)
	{
		int user_command = menu_view();
		switch (user_command)
		{
		case 1:
			creat();
			return;
		case 2:
			money_in();
			return;
		case 3:
			money_out();
			return;
		case 4:
			view_all_user();
			return;
		case 5:
			program_stat = 0;
			return;
		case 6:
			return;
		}
	}

	return 0;
}

int creat()
{
	char name;
	int usernumber;
	int usermoney;
	int lengthofuser = (sizeof(user) / sizeof(Data));
	cout << "계좌 개설" << endl;
	cout << " 계좌번호 " << lengthofuser << endl;
	cout << "이름: ";
	cin >> name;
	cout << endl;
	if ((sizeof name / sizeof char) > 0)
	{
		user[lengthofuser] = { name, lengthofuser, 0 };
		cout << "계좌 개설 성공" << endl;
	}
	else
	{
		cout << "계좌 개설 취소" << endl;
	}
}

int money_in()
{

}

int money_out()
{

}

int view_all_user()
{

}


int menu_view(void) 
{
	int user_input = -1;
	cout << "--------ㅡMenu--------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
	cin >> user_input;
	return user_input;
}