#pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <string>
using namespace std;
class Student
{
protected:
	string	name;
	string	No;
public:
	Student()
	{
		name = "unset string";
		No = "unset No";
	}
	void setName(string	a)
	{
		name = a;
	}
	void setNo(string b)
	{
		No = b;
	}
	string getName()
	{
		return name;
	}
	string getNo()
	{
		return	No;
	}

};

class AutoStu : public	Student
{
private:
	int AutoScore;
	string major;
public:
	void setAutoScore(int a)
	{
		AutoScore = a;
		major = "�Զ���רҵ";
	}
	int getAutoScore()
	{
		return AutoScore;
	}
	string getMajor()
	{
		return major;
	}
};

class EleStu : public	Student
{
private:
	int EleScore;
	string major;
public:
	void setEle(int a)
	{
		EleScore = a;
		major = "������Ϣ����";
	}
	int getEleScore()
	{
		return EleScore;
	}
	string getMajor()
	{
		return major;
	}
};

class IOTStu : public	Student
{
private:
	int IOTScore;
	string major;
public:
	void setIOTS(int a)
	{
		IOTScore = a;
		major = "����������";
	}
	int getIOTScore()
	{
		return IOTScore;
	}
	string getMajor()
	{
		return major;
	}
};

void mune();
void run();
#endif // !__STUDENT_H__
/*	��ļ̳�
�̳л����ࡢ���һ���Զ���רҵѧ����͵�����Ϣרҵѧ���ࡣ
�Զ���רҵѧ��Ӧ�����Զ�����ԭ��γ̳ɼ���
������Ϣרҵѧ��Ӧ�����ź���ϵͳ�γ̳ɼ���
�������һ��רҵ��ż�רҵ���ơ�
���������س�Ա������ʵ��ѧ����Ϣ�������������*/

