#include "pch.h"
#include "student.h"
#include <iostream>
#include <iomanip>
using namespace std;
void mune()
{
	cout << "-----------------------------" << endl;
	cout << "1.�����Զ���רҵѧ���ɼ�   " << endl;
	cout << "2.���������Ϣרҵѧ���ɼ� " << endl;
	cout << "3.����������רҵѧ����Ϣ   " << endl;
	cout << "4.��ѯѧ���ɼ�" << endl;
	cout << "���������ѡ�� ��" ;
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
			cout << "������\t";
			cin >> name;
			cout << "ѧ�ţ�\t";
			cin >> No;
			cout << "�ɼ�: \t";
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
			cout << "������\t";
			cin >> name;
			cout << "ѧ�ţ�\t";
			cin >> No;
			cout << "�ɼ�: \t";
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
			cout << "������\t";
			cin >> name;
			cout << "ѧ�ţ�\t";
			cin >> No;
			cout << "�ɼ�: \t";
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
				cout << setw(20) << "רҵ \t|" << stu[o].getMajor() << endl;
				cout << setw(20) << "���� \t|" << stu[o].getName() << endl;
				cout << setw(20) << "ѧ�� \t|" << stu[o].getNo() << endl;
				cout << setw(20) << "�Զ��������۳ɼ� \t|" << stu[o].getAutoScore() << endl;
			}
			for (int o = 0; o < j; o++)
			{
				cout << setw(20) << "******************" << endl;
				cout << setw(20) << "רҵ \t|" << Estu[o].getMajor() << endl;
				cout << setw(20) << "���� \t|" << Estu[o].getName() << endl;
				cout << setw(20) << "ѧ�� \t|" << Estu[o].getNo() << endl;
				cout << setw(20) << "�ź���ϵͳ�ɼ� \t|" << Estu[o].getEleScore() << endl;
			}
			for (int o = 0; o < k; o++)
			{
				cout << setw(20) << "******************" << endl;
				cout <<setw(20)<< "רҵ \t|" << Istu[o].getMajor() << endl;
				cout << setw(20) << "���� \t|" << Istu[o].getName() << endl;
				cout << setw(20) << "ѧ�� \t|" << Istu[o].getNo() << endl;
				cout << setw(20) << "������רҵC++�ɼ� \t|" << Istu[o].getIOTScore() << endl;
			}
		}
		break;
		}
	}
}