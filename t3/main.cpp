#include<iostream>
#include"Student"
using namespace std;
int main() {
	Student stu1;
	Student stu2;
	stu1.Set(90.96);
	stu2.Set(89.78);
	stu1.Set("Wang");
	stu2.Set("Hang");
	stu1.Set(102938);
	stu2.Set(102937);
	Student stu3 = stu1;
	stu1.Show();
	stu2.Show();
	stu3.Show;
	cout << stu1.Average() << endl;
	return 0;
}