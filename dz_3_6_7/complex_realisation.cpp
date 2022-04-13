#include "complex.h"



double complex::modul()
{
	return sqrt(pow(this->Re, 2) + pow(this->Im, 2));
}

complex complex::operator+(const complex& other) {

	complex sum(this->Re + other.Re, this->Im + other.Im);
	cout << sum.Re << " " << sum.Im << "i" << endl;
	return sum;
}

complex complex::operator-(const complex& other) {

	complex minus(this->Re - other.Re, this->Im - other.Im);
	cout << minus.Re << " " << minus.Im << "i" << endl;
	return minus;
}

complex complex::operator*(const complex& other) {

	complex ymnozh(this->Re * other.Re - this->Im * other.Im, this->Re * other.Im + this->Im * other.Re);
	cout << ymnozh.Re << " " << ymnozh.Im << "i" << endl;
	return ymnozh;
}

complex complex::operator/(const complex& other) {

	complex del((this->Re * other.Re + this->Im + other.Im) / (pow(other.Im, 2) + pow(other.Re, 2)), (other.Re * this->Im - this->Re * other.Im) / (pow(other.Im, 2) + pow(other.Re, 2)));
	cout << del.Re << " " << del.Im << "i" << endl;
	return del;

	

}
bool complex::operator>(complex& other) {
	return this->modul() > other.modul();
}


