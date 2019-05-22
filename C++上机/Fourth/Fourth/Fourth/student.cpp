#include "pch.h"
#include "student.h"
#include <iostream>
#include <iomanip>
using namespace std;
void mune()
{
	cout << "-----------------------------" << endl;
	cout << "1.输入自动化专业学生成绩   " << endl;
	cout << "2.输入电子信息专业学生成绩 " << endl;
	cout << "3.输入物联网专业学生信息   " << endl;
	cout << "4.查询学生成绩" << endl;
	cout << "请输入你的选择 ：" ;
}

void run()
{
	AutoStu	stu[20];
	EleStu Estu[20];
	IOTStu Istu[20];
	int i = 0, j = 0 , k = 0;
	
	while (1)
	{
		mune();
		int choice;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case	1:
		{
			string name;
			string No;
			int score;
			cout << "姓名：\t";
			cin >> name;
			cout << "学号：\t";
			cin >> No;
			cout << "成绩: \t";
			cin >> score;
			stu[i].setName(name);
			stu[i].setNo(No);
			stu[i].setAutoScore(score);
			i++;

		}
		break;
		case	2:
		{
			string name;
			string No;
			int score;
			cout << "姓名：\t";
			cin >> name;
			cout << "学号：\t";
			cin >> No;
			cout << "成绩: \t";
			cin >> score;
			Estu[j].setName(name);
			Estu[j].setNo(No);
			Estu[j].setEle(score);
			j++;
		}
		break;
		case	3:
		{
			string name;
			string No;
			int score;
			cout << "姓名：\t";
			cin >> name;
			cout << "学号：\t";
			cin >> No;
			cout << "成绩: \t";
			cin >> score;
			Istu[k].setName(name);
			Istu[k].setNo(No);
			Istu[k].setIOTS(score);
			k++;
		}
		break;
		case	4:
		{
			for (int o = 0; o < i; o++)
			{
				cout << setw(20) << "******************" << endl;
				cout << setw(20) << "专业 \t|" << stu[o].getMajor() << endl;
				cout << setw(20) << "姓名 \t|" << stu[o].getName() << endl;
				cout << setw(20) << "学号 \t|" << stu[o].getNo() << endl;
				cout << setw(20) << "自动控制理论成绩 \t|" << stu[o].getAutoScore() << endl;
			}
			for (int o = 0; o < j; o++)
			{
				cout << setw(20) << "******************" << endl;
				cout << setw(20) << "专业 \t|" << Estu[o].getMajor() << endl;
				cout << setw(20) << "姓名 \t|" << Estu[o].getName() << endl;
				cout << setw(20) << "学号 \t|" << Estu[o].getNo() << endl;
				cout << setw(20) << "信号与系统成绩 \t|" << Estu[o].getEleScore() << endl;
			}
			for (int o = 0; o < k; o++)
			{
				cout << setw(20) << "******************" << endl;
				cout <<setw(20)<< "专业 \t|" << Istu[o].getMajor() << endl;
				cout << setw(20) << "姓名 \t|" << Istu[o].getName() << endl;
				cout << setw(20) << "学号 \t|" << Istu[o].getNo() << endl;
				cout << setw(20) << "物联网专业C++成绩 \t|" << Istu[o].getIOTScore() << endl;
			}
		}
		break;
		}
	}
}