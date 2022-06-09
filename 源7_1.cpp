#include <iostream>
using namespace std;
int a = 0;
int main()
{
	int b = 2;
	cout << a << ";" << b << "; ";
	{
		int b = 0;
		static int a = 5;
		cout << a << ";";
		a = 10;
		b = 10;
		cout << a < ";";
	}
	cout << a << ";" << b << endl;
	return 0;
}
