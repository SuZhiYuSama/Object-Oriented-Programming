#include<iostream>
using namespace std;
double crcl(double r, double& s, double& c);
int main() {
	double x, y = 0, z = 0;
	cin >> x;
	cout << crcl(x, y, z) << "  " << y << "  " << z;
	return 0;
}
double crcl(double r, double& s, double& c) {
	s = 3.1415 * r * r;
	c = 2 * 3.1415 * r;
	return r;
}
