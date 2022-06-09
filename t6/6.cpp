#include<iostream>
using namespace std;
class Triangle {
public: Triangle(double x = 0, double y = 0, double z = 0) {
	X = x; Y = y; Z = z;
}
	  int IsTrig() {
		  if (X + Y > Z && X + Z > Y && Y + Z > X)
			  return 1;
		  else return 0;
	  }
	  double Area() {
		  double a = (X + Y + Z) / 2,S;
		  S= sqrt(a * (a - X) * (a - Y) * (a - Z));
		  return S;
	  }
	  friend double SumArea(Triangle &s1,Triangle &s2) {
		  double p;
		  p = s1.Area() + s2.Area();
		  return p;
	  }
private:double X, Y, Z;
};
int main() {
	double a, b, c, d, e, f;
	cout << "输入第一个三角形的三边长度:";
	cin >> a >> b >> c;
	cout << "输入第二个三角形的三边长度:";
	cin >> d >> e >> f;
	Triangle s1(a, b, c);
	Triangle s2(d, e, f);
	while (1) {
		if (s1.IsTrig() == 1 && s2.IsTrig() == 1) {
			cout << "两个都是三角形" << endl;
			cout << "第一个三角形面积为：" << s1.Area() << "，第二个三角形面积为：" << s2.Area() << endl;
			cout << "面积之和为：" << SumArea(s1, s2);
			return 0;
		}
		else cout << "含有非三角形无法计算";
			break;
	}
}