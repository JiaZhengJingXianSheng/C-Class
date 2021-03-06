/*一、动态申请内存
编写一个函数用于为一个二维数组申请空间，该函数的原型为：
double ** RequestAMatrix(int row,int col);
其中函数的两个参数规定了二维数组的行数和列数。有了此函数，
当需要一个二维数组时，不再需要如下的语句(比如要定义一个200x100的二维数组)：
double x[200][100];
而可以用如下的方式定义二维数组：
double **x= RequestAMatrix(200,100);
看上去这里的x是一个指针的指针，但它本质上就是一个二维数组。
另外，请分析这两种数组定义的方式有什么本质的区别？实践中你喜欢哪一种方式？
最后编写一个简单程序调用你编写的函数，对你的函数进行测试。*/
#include "pch.h"
#include <iostream>
double ** RequestAMatrix(int row, int col)
{
	double **a = new double *[row];
	for (int i = 0; i < row ; i++)
	{
		a[i] = new double[col];
	}
	return a;
}