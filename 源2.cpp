#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a, b, c, fin1, fin2;
	cin >> a >> b >> c;
	if (a == 0)fin = -c / b;
	else if (b * b - 4 * a * c == 0)fin1 = fin2 = -b / (2 * a);
	else if (b * b - 4 * a * c > 0)fin1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a), fin2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	else if (b * b - 4 * a * c < 0)fin1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a), fin2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	return 0;
}