#include<iostream>
using namespace std;
typedef class stu
{
public:
	char name;
private:
	int num;
};
int main() {
	stu *student1 = new stu;
	stu* students = new stu[10];
	cout << "���󴴽���ϣ�" << endl;
	delete student1;
	delete students;
	return 0;
}