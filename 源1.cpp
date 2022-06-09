#include<iostream>
using namespace std;
int minicount(int &a, int &b, int &c); 
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	cout << minicount(x, y, z) << endl;
	return 0;
}
int minicount(int& a, int& b, int& c) {
	int sum;
	a < b ? (a < c ? sum = a : sum = c) : (b < c ? sum = b : sum = c);
	return sum;
}
