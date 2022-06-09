#include<iostream>
using namespace std;

class Employee {
public:
	Employee(string str) { name = str; salary = 0; }
	virtual void pay() = 0;
protected:
	string name;
	double salary;
};

class Manager :virtual public Employee {
public:
	Manager(string str) :Employee (str) {}
	virtual void pay() { 
		salary = 7000;
		cout <<name<< "月薪:" << salary << endl;
		}
private:
	double salary;

};

class Technicain :public Employee {
public:
	Technicain(string str, double salary = 0) :Employee(str) {  a=salary; }
	void pay(){
		double salary;
		salary = a * 100;
		cout << name <<"月薪:" << salary << endl;
	}
private:
	double a;
	string str;
};

class Salesman :public Employee {
public:
	Salesman(string str, double salary = 0) :Employee(str) { a = salary; }
	void pay(){
		double salary = 0;
		salary = a * 0.05;
		cout << name << "月薪:" << salary << endl;
	}
private:
	double salary;
	double a;
};

class Salesmanager :public Employee {
public:
	Salesmanager(string str, double salary = 0) :Employee(str) { a = salary; }
	void pay(){
		double salary = 0;
		salary = 4000 + a * 0.005;
		cout << name << "月薪为" << salary << endl;
	}
private:
	double salary;
	double a;
};
 
int main(){
	string h,i,j,k;
	h = " Yu " ,i = " Yan " ,j = " Zhang " ,k = " Liu ";
	Manager a(k); Technicain b(h,480); Salesman c(i, 150000); Salesmanager d(j, 3000000);
	Employee* p = &a;
	p->pay();
	Employee* q = &b;
	q->pay();
	Employee* e = &c;
	e->pay();
	Employee* f = &d;
	f->pay();
	return 0;
}
