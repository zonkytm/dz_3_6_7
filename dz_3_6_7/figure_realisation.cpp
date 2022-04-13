#include "Figure.h"



double rectangle::getsquare() {
	return (first * second);
}

double rectangle::getperimetr() {
	return (2 * (first + second));
}

string rectangle::showfigure() {

	return "rectangle\t";
}


double circle::getsquare() {
	return (3.14 * pow(r, 2));
}

double circle::getperimetr() {
	return (2 * 3.14 * r);
}

string circle::showfigure() {

	return "cirkle\t";
}

void circle::Set_color(string color) {
	this->color = color;
}


string circle::Get_color() {
	return color;
}



void circle::Set_x_y(int x, int y) {
	this->x = x;
	this->y = y;
}


void vector::Set_x_y(Point& a, Point& b) {
	this->x = b.x - a.x;
	this->y = b.y - a.y;
}


double vector::Get_length() {
	return sqrt(pow(x, 2) + pow(y, 2));
}


vector& vector::operator+(const vector& other) {
	vector n2;
	n2.x = this->x + other.x;
	n2.y = this->y + other.y;
	return n2;
}

vector& vector::operator+=(const vector& other) {
	this->x = this->x + other.x;
	this->y = this->y + other.y;
	return *this;
}

vector& vector::operator-(const vector& other) {
	vector n2;
	n2.x = this->x - other.x;
	n2.y = this->y - other.y;
	return n2;
}

vector& vector::operator-=(const vector& other) {
	this->x = this->x - other.x;
	this->y = this->y - other.y;
	return *this;
}

vector vector::mult(int b) {
	this->x = x * b;
	this->y = y * b;
	return *this;
}
void vector::Get_x_y() {
	cout << this->x << "\t" << this->y << endl;
}



//Массив объектов класса

string pixels::Get_info() {
	return "r= " + to_string(r) + "\t g= " + to_string(g) + "\t b= " + to_string(b);
}

pixels& pixels:: operator=(const pixels& other) {
	this->r = other.r;
	this->g = other.g;
	this->b = other.b;
	return *this;
}