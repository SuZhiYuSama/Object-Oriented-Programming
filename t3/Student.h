#ifndef _Student_
#define _Student_

class Student {
public:
	string name;
	int number;
	double score;
	Student(const Student&);
	Student& operator = (const Student&);
	void Set(string);
	void Set(int);
	void Set(double);
	void Show();
public:
	static double totalscore;
	static int totalnumber;
	static double Average();
};

#endif