// Second.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "fun.h"
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int NO = 0;
	STU * student;
	student = new STU[10];

	int setIndex;
	string setName;
	string setGender;
	int setAge;
	char choice = 'y';
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << setw(30) << "| 请输入学号  ：";
		cin >> setIndex;
		cout << setw(30) << "| 请输入姓名  ：";
		cin >> setName;
		cout << setw(30) << "| 请输入性别  ：";
		cin >> setGender;
		cout << setw(30) << "| 请输入年龄  : ";
		cin >> setAge;
		cout << endl;
		student[i].setData(setIndex , setName ,setGender ,setAge);
		NO++;
		getchar();
		cout << setw(30) << "| 是否继续输入：";
		cout << " y / n ?\t\t";
		choice = getchar();
		if (choice == 'n' || choice == 'N')
			break;
	}
	
	//print
	for (int i = 0; i < NO; i++)
	{
		cout << endl;
		cout << setw(30) << "| 学号 :   " << "[ " << student[i].getIndex() << " ]" << endl;
		cout << setw(30) << "| 姓名 ：  " << student[i].getName() << endl;
		cout << setw(30) << "| 性别 ：  " << student[i].getGender() << endl;
		cout << setw(30) << "| 年纪 ：  " << student[i].getAge() << endl;
	}
	

	return 0;
}
