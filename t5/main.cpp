#include<iostream>
#include"CPoint.h"
#include"CRectangle.h"
using namespace std;
int main() 
{
	int  l, h;
	cout<< "�����볤�Ϳ�";
    cin>> l >> h;
	CRectangle A(l,h);
	cout << "��Ϊ��" << A.GetL() << "��Ϊ��" << A.GetH() << endl;
	A.Perimeter(); A.Area();
	int x, y;
	cout << "������һ���������x��y��";
	cin >> x >> y;
	CPoint C(x, y);
	cout << "XΪ��" << C.Getx() << "YΪ��" << C.Gety() << endl;
}