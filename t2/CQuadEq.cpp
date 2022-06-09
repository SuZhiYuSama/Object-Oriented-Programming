#include<iostream>
#include<math.h>
#include"CQuadEq"

void FindRoot() {
	if (this->a == 0)this->x1 = this->x2 = -(this->c / this->b);
	else if (this->b * this->b - 4 * this->a * this->c == 0)this->x1 = this->x2 = -(this->b / (2 * this->a));
	else if (this->b * this->b - 4 * this->a * this->c > 0)this->x1 = (-(this->b) + sqrt(this->b * this->b - 4 * this->a * this->c)) / (2 * this->a), this->x2 = (-(this->b) - sqrt(this->b * this->b - 4 * this->a * this->c)) / (2 * this->a);
	else if (this->b * this->b - 4 * this->a * this->c < 0)this->x1 = (-(this->b) + sqrt(this->b * this->b - 4 * this->a * this->c)) / (2 * this->a), x2 = (-(this->b) - sqrt(this->b * this->b - 4 * this->a * this->c)) / (2 * this->a);
}

void Show() {
	if (this->x1 == this->x2) {
		cout << this->x1 << endl; return 0;
	}
	else {
		cout << this->x1 << "  " << this->x2 << endl;
		return 0;
	}
}