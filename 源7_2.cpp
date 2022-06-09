#include <iostream>
using namespace std;
int a[]={ 9,7,5,3,1 };
int main()
{
	int* p = &a[2];
	int d(6), b(0);
	for (int i = -2; i <= 2; i++)
		b += (*(p + i) > d) ? *(p + i) : d;
	cout << b << endl;
	return 0;
}