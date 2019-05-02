#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include<string>
#include <sstream>
using namespace std;

class Complex{
private:
	double real,ima;
public:
	Complex();
	Complex(int = 0, int = 0);
	Complex add(const Complex&) const;
	Complex subtract(const Complex&) const;
	Complex multiply(const Complex&) const;
	Complex operator+(const Complex&) const;
	Complex &operator+();
	Complex operator-(const Complex&) const;
	Complex &operator-();
	Complex operator*(const Complex&) const;
	Complex &operator=(const Complex&) ;
	Complex &operator+=(const Complex&) ;
	Complex &operator-=(const Complex&) ;
	Complex &operator*=(const Complex&) ;
	Complex &operator++();
	Complex operator++(int);
	Complex &operator--();
	Complex operator--(int);
	friend ostream &operator<<(ostream &, const Complex&);
	friend istream &operator>>(istream &,Complex&);
	int operator[](int);

	string toString();
};
#endif