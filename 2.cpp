#include <iostream>
#include <string>
using namespace std;
class Ball
{
	string name;
public:
	Ball(string s) : name(s) {};
	string Getname() { return name; }
};
class A  // abstract class
{
	string aname;
	Ball& b;
public: // your functions:
	virtual string play() = 0;
	A(string str, Ball& pb) : Aname(str), b(pb) {	}
	friend ostream& operator<<(ostream& os, const A& An) {
		os << An.aname << "likes to play" << An.b.Getname();
		return os;
	}
};
class B : public A
{
	string name;
public: // your functions:0
	virtual void play() { cout << name << "::play" << endl; }
	B(string str, Ball& pb) :A(str, pb) {	}
};
class C : public A
{
	string name;
public: // your functions:
	virtual void play() { cout << name << "::play" << endl; }
	C(string str, Ball& pb) :A(str, pb) {	}
};

int main()
{
	Ball pingpang("pingpang ");
	A* pa = new B("B", pingpang);
	pa->play();   // display: B::play
	cout << *pa << endl; // display: B likes to play pingpang.
	delete pa;
	pa = new C("C", pingpang);
	pa->play();    // display: C::play
	cout << *pa << endl; // display: C likes to play pingpang.
	delete pa;
	return 0;
}