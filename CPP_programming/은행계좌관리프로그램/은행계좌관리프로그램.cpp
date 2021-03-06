// 은행계좌관리프로그램.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int program_stat = 1;
const int name_length = 20;

typedef struct consumer_data
{
	char name[name_length];
	int number;
	double money;
}Data;

Data user[10000];
int usercount = 0;


void creat(void);
void money_in(void);
void money_out(void);
void view_all_user(void);
int menu_view(void);

int main()
{
	while (1)
	{
		int user_command = menu_view();
		switch (user_command)
		{
		case 1:
			creat();
			break;
		case 2:
			money_in();
			break;
		case 3:
			money_out();
			break;
		case 4:
			view_all_user();
			break;
		case 5:
			return 0;
		default:
			break;
		}
		
	}

	return 0;
}

void creat()
{
	char name[name_length];
	int usernumber;
	int usermoney;
	
	
	cout << "계좌 개설" << endl;
	cout << " 계좌번호 " << usercount << endl;
	cout << "이름: ";
	cin >> name;
	cout << endl;
	if (name[0] != 0)
	{
		strcpy_s(user[usercount].name, name);
		user[usercount].number = usercount;
		user[usercount].money = 0;
		cout << "계좌 개설 성공" <<user[usercount].name<<","<< user[usercount].number <<","<< user[usercount].money << endl;
		usercount++;
	}
	else
	{
		cout << "계좌 개설 취소" << endl;
	}
	

		return;
}

void money_in()
{
	int usernumber;
	int input_money;

	cout << "계좌번호 입력: ";
	cin >> usernumber;
	cout << endl;

	cout << "입금액 :";
	cin >> input_money;
	user[usernumber].money += input_money;
}

void money_out()
{
	int usernumber;
	int input_money;

	cout << "계좌번호 입력: ";
	cin >> usernumber;
	cout << endl;

	cout << "출금액 :";
	cin >> input_money;
	user[usernumber].money -= input_money;
}

void view_all_user()
{
	cout << "이름, 계좌번호, 잔액" << endl;
	for (int i = 0; i < usercount; i++)
	{
		
		cout <<  user[i].name << ", " << user[i].number << ", " << (user[i].money) << endl;
	}

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