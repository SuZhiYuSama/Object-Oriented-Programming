#include<iostream>
using namespace std;
int main() {
	int a, b, c, sum;
	cin >> a >> b >> c;
	switch (c) {
	case 42:sum = a * b;
	case 43:sum = a + b;
	case 45:sum = a - b;
	case 47:sum = a / b;
	}
	cout << sum;
	return 0;
}