#ifndef _Circle_
#define _Circle_

class Circle {
public:
	double radius = 0;
	double Ccir = 0;
	double Scir = 0;
	Circle(double);
	Circle(const Circle&);
public:
	const double pi = 3.14159265358979323946;
};

#endif