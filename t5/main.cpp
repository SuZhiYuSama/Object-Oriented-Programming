#include<iostream>
#include"CPoint.h"
#include"CRectangle.h"
using namespace std;
int main() 
{
	int  l, h;
	cout<< "请输入长和宽：";
    cin>> l >> h;
	CRectangle A(l,h);
	cout << "长为：" << A.GetL() << "宽为：" << A.GetH() << endl;
	A.Perimeter(); A.Area();
	int x, y;
	cout << "请输入一个点坐标的x，y：";
	cin >> x >> y;
	CPoint C(x, y);
	cout << "X为：" << C.Getx() << "Y为：" << C.Gety() << endl;
}