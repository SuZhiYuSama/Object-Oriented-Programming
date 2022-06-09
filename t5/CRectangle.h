#include<iostream>
using namespace std;
class CRectangle {
public:CRectangle(int l = 0, int h = 0) {L = l; H = h;}
	  int GetL() { return L; }
	  int GetH() { return H; }
	  void Perimeter() { int p=0; p = 2 * (L + H); cout << "周长为：" << p << endl; }
	  void Area() { int s = 0; s = L * H; cout << "面积为" << s << endl; }
private:int L, H;
	   CPoint C();
};
