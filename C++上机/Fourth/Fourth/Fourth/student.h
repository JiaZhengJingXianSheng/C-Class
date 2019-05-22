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
		major = "自动化专业";
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
		major = "电子信息工程";
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
		major = "物联网工程";
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
/*	类的继承
继承基本类、设计一个自动化专业学生类和电子信息专业学生类。
自动化专业学生应包括自动控制原理课程成绩、
电子信息专业学生应包括信号与系统课程成绩。
另外添加一个专业编号及专业名称。
重新设计相关成员函数，实现学生信息的输入与输出。*/

