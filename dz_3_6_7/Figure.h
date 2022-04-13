#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
#include <string>
using namespace std;



class Figure {
public:
	virtual double getsquare() = 0;
	virtual double getperimetr() = 0;
	virtual string showfigure() = 0;
	~Figure() {
		cout << "Figure dest\n";
	}
};



class rectangle : public Figure {
private:
	int first, second;
	string color;

public:
	rectangle(int first, int second) {
		this->first = first;
		this->second = second;
	}
	double getsquare() override;
	double getperimetr() override;
	string showfigure() override;

};


class circle : public Figure {
private:
	int r;
	string color;
	int x, y;



public:
	circle(int r) {
		this->r = r;
	}
	circle(int r, int x) :circle(r) {
		this->x = x;
	}
	circle(int r, int x, int y) :circle(r, x) {
		this->y = y;
	}

	circle(circle& other) {

		this->r = other.r;
		this->color = other.color;
		this->x = other.x;
		this->y = other.y;
	}
	double getsquare() override;
	double getperimetr() override;
	string showfigure() override;
	void Set_color(string color);
	string Get_color();
	void Set_x_y(int x, int y);
	~circle() {
		cout << "dest\n";
	}
};


class Point {
public:
	int x, y;
	Point(int x, int y) {
		this->x = x;
		this->y = y;

	}
	Point() {
		x = 0;
		y = 0;
	}
};


class vector {

private:
	int x, y;

public:
	vector() {
		cout << "construct \n";
	}

	vector(vector& other) {

		this->x = other.x;
		this->y = other.y;
	}
	void Set_x_y(Point& a, Point& b);

	double Get_length();
	void Get_x_y();
	vector& operator+(const vector& other);
	vector& operator+=(const vector& other);
	vector& operator-(const vector& other);
	vector& operator-=(const vector& other);
	vector mult(int b);
	~vector() {
		cout << "dest vector";
	}
};

//Массив объектов класса

class pixels {

private:
	int r, g, b;
public:
	pixels() {
		r = g = b = 0;
	}
	pixels(int r, int g, int b) {
		this->r = r;
		this->g = g;
		this->b = b;
	}

	pixels(pixels& other) {
		this->r = other.r;
		this->g = other.g;
		this->b = other.b;
	}
	string Get_info();
	pixels& operator=(const pixels& other);

};



#endif

