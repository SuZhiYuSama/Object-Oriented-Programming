#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if((a<b)?((a<c)?(c=a):(a=c)):((b<c)?(c=b):(b=c)))cout<<c;
	return 0;
}
