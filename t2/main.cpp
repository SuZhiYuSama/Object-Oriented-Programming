#include<iostream>
#include"CQuadEq"
using namespace std;
int main() {
	CQuadEq xyz;
	char order="y";
	while (order != "n") {
		cin >> order;
		if (order == "y" || order == "Y") {
			cin >> xyz.a >> xyz.b >> xyz.c;
			xyz.FindRoot();
			xyz.show();
		}
	}
	return 0;
}