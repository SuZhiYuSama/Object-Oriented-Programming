#include<iostream>
#include"Circle"

Circle(const Circle& Cir) {
	this->radius = Cir.radius;
	this->Ccir = Cir.Ccir;
	this->Scir = Cir.Scir;
}

Circle(double R) {
	this->radius = R;
	Ccir = 2 * pi * radius;
	Scir = pi * radius * radius;
	cout << "radius:" << radius << "  " << "C:" << Ccir << "  " << "S:" << Scir << endl;
}