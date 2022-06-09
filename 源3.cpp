#include<iostream>
using namespace std;
long jiecheng(long n);
int main() {
	long x;
	cin >> x;
	cout << jiecheng(x) << endl;
	return 0;
}
long jiecheng(long n) {
	if (n == 0 || n == 1)return 1;
	else return jiecheng(n - 1) * n;
	return jiecheng(n);
}