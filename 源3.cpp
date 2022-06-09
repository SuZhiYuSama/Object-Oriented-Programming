#include<iostream>
using namespace std;
int main() {
	int i = 10, sum = 0;
/*	while (i) {
		sum += i;
		i--;
	}
	do {
		sum += i;
		i--;
	} while (i);*/
	for (i = 1; i <= 10; i++)sum += i;
	cout << i << endl;
	return 0;
}