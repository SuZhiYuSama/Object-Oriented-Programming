#include<iostream>
using namespace std;
float count(float a, float b, float c);
float fin1, fin2;
int main() {
	float x, y, z;
	cin >> x >> y >> z;
	count(x, y, z);
	cout << fin1 << fin2 << endl;
	return 0;
}
float count(a, b, c) {
	if (a == 0)fin = -c / b;
	else if (b * b - 4 * a * c == 0)fin1 = fin2 = -b / (2 * a);
	else if (b * b - 4 * a * c > 0)fin1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a), fin2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	else if (b * b - 4 * a * c < 0)fin1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a), fin2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	return 0;
}