#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class complex
{
public:
	double Re, Im;
	complex(double valueRe = 0) {//
		Re = valueRe;
		Im = 0;
	}
	complex(int valueRe, int Im) :complex(valueRe) {
		this->Im = Im;

	};
	complex(complex& other) {
		this->Re = other.Re;
		this->Im = other.Im;
	}

	complex operator+(const complex& other);
	complex operator-(const complex& other);
	complex operator*(const complex& other);
	complex operator/(const complex& other);
	bool operator>(complex& other);
	double modul();
	~complex() {
		cout << "Destructor\n";
	}


};


#endif