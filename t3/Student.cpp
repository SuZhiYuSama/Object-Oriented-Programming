#include<iostream>
#include"Student"

void Set(string setname) {
	this->name = setname;
	totalnumber++;
}

void Set(int setnumber) {
	this->number = setnumber;
}

void Set(double setscore) {
	this->score = setscore;
	totalscore += setscore;
}

void Show() {
	cout << this->name << " " << this->number << " " << this->score << endl;
}

static double Average() {
	return totalscore / totalnumber;
}

Student(const Student & Stc) {
	this->name = Stc.name;
	this->number = Stc.number;
	this->score = Stc.score;
	totalnumber++;
	totalscore += score;
}

Student& operator = (const Student & other) {
	if (this->name == &other.name && this->number == &other.number && this->score == &other.score)	// (1)检查自赋值
		return *this;
	delete this->name, this->number, this->score;													// (2)释放自己原有的内存资源
	int* number = new int;																			// (3)分配新的内存资源，并复制内容
	string* name = new string;
	double* score = new double;
	this->name = &other.name;
	this->number = &other.number;
	this->score = &other.score;
	return *this;																					// (4)返回本对象的引用
}