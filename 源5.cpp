#include <iostream>
using namespace std;
int main() {
	int a(8);
	int& ra = a;
	cout << (ra== a) << "; ";
	cout << (&ra== & a) << ";";
	cout << (sizeof(ra) == sizeof(a)) << endl;
	return 0;
}