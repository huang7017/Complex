#include"Complex.h"

int main() {
	Complex first = Complex(3,4) + Complex(2,-4)* Complex(3,-1);
	cout << "first=" << first.toString() << endl;

	Complex second = Complex(4, 3) - Complex(5, 6);
	cout << "second=" << second.toString() << endl;

	cout << "++first=" << ++first << endl;

	cout << "--second=" << --second << endl;


	system("pause");
}