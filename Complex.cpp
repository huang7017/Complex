#include"Complex.h"

Complex::Complex() {
	real = 0;
	ima = 0;
}

Complex::Complex(int newReal, int newIma) {
	real = newReal;
	ima = newIma;
}

Complex Complex::add(const Complex &right)const {
	return Complex(real + right.real, ima + right.ima);
}
Complex Complex::operator+(const Complex&right) const {
	return add(right);
}
Complex & Complex::operator+() {
	real *= 1;
	ima *= 1;
	return *this;
}


Complex Complex::subtract(const Complex &right)const {
	return Complex(real - right.real, ima - right.ima);
}
Complex Complex::operator-(const Complex&right) const {
	return subtract(right);
}
Complex & Complex::operator-() {
	real *= -1;
	ima *= -1;
	return *this;
}

Complex Complex::multiply(const Complex &right) const {
	return Complex(real * right.real -ima * right.ima, real * right.ima + ima * right.real);
}
Complex Complex::operator*(const Complex&right) const {
	return multiply(right);
}

Complex &Complex::operator=(const Complex&right)  {
	*this = right;
	return *this;
}
Complex &Complex::operator+=(const Complex &right)  {
	*this = add(right);
	return *this;
}
Complex &Complex::operator-=(const Complex &right)  {
	*this = subtract(right);
	return *this;
}
Complex &Complex::operator*=(const Complex &right)  {
	*this = multiply(right);
	return *this;
}
Complex &Complex::operator++() {
	real += 1;
	return *this;
}
Complex Complex::operator++(int dummy) {
	Complex temp(real, ima);
	real += 1;
	return temp;
}
Complex &Complex::operator--() {
	real -= 1;
	return *this;
}
Complex Complex::operator--(int dummy) {
	Complex temp(real, ima);
	real -= 1;
	return temp;
}
int Complex::operator[](int index) {
	if (index == 0)
		return real;
	else if (index == 1)
		return ima;

}

ostream &operator<<(ostream &out, const Complex&right) {
	out <<right.real <<right.ima << "i";
	return out;
}
istream &operator>>(istream &in,Complex&right) {
	in >> right.real;
	in >> right.ima;
	return in;
}
string Complex::toString() {
	stringstream ss1,ss2;
	ss1 << real;
	ss2 << ima;
	return ss1.str()+ss2.str()+"i";
	
}