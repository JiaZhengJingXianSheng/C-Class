// First.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "fun.h"
#include <iomanip>
using namespace std;
int main()
{
    //std::cout << "Hello World!\n"; 
	int row = 3, col = 4;
	double ** array;
	array =   RequestAMatrix( row,  col);
	double num = 1.0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0 ;j < col ; j++)
		{
			array[i][j] = num;
			num = num + 1.0;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(8) << array[i][j] ;

		}
		cout << endl;
	}
	//释放
	for (int i = 0; i < row; i++)
		delete []array[i];
	delete []array;
	return 0;

}