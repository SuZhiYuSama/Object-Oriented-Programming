#include<iostream>
#include<cmath>
using namespace std;
float distance(float x) {
	return x;
}
float distance(float x, float y) {
	return sqrt(x * x + y * y);
}
float distance(float x, float y, float z) {
	return sqrt(x * x + y * y + z * z);
}
int main() {
	cout << distance(1.5, -1.5) << " " << distance(1, 1, 1) << endl;
	return 0;
}