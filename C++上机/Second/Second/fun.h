#pragma once
#ifndef __FUN_H__
#define __FUN_H__
#include <string>
using namespace std;
class STU
{
private:
	int Index;
	
	string Name;
	string Gender;
	int Age;
public:
	
	void setData(int , string , string, int );
	int    getIndex() { return Index; }
	string  getName() { return Name; }
	string  getGender() { return Gender; }
	int    getAge() { return Age; }
};
#endif // !__FUN_H__


/*�������������
1������
���һ��ѧ���࣬����ѧ��������Ϣ��ѧ�š��������Ա����䣨�򣺳������ڡ�Ӣ��ɼ������ݳɼ���ѧ����������
2��Ҫ��
1���ṩ��س�Ա����ʵ��ѧ����Ϣ�������������������˵����ʵ����س�Ա����
2����дһ��������������ѧ���������Ϣ�������ѧ�������һ��ѧ�������У�Ȼ�����ŵ��ļ���
3����дһ�������ȡ�ļ��е�ѧ���������ŵ�һ��ѧ�������С�*/