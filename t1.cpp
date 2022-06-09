#include<iostream>
using namespace std;
class Mammal {
public:
	virtual void speak(){ 
		cout << "Mammal" << endl;
	}
};
class Dog:public Mammal {
public:
	void speak(){
		cout << "Dog" << endl;
	}
};
class pug:public Mammal {
public:
	void speak(){
		cout << "pug" << endl;
	}
};
void Talk(Mammal& per) { per.speak(); }
int main()
{
	pug d;
	Talk(d);
	return 0;
}
