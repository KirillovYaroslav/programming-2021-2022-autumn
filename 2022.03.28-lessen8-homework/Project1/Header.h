#pragma once
#include <iostream>
#include <cmath>
class complnum
{
private:
	double a;
	double b;
public:
	complnum(double a = 0, double b = 0);
	complnum(const complnum& comp);
	~complnum();
	
	double getA();
	void setA(double a);

	double getB();
	void setB(double b);
	void set(double a, double b);

	void print();
	

	void operator=(const complnum& comp);
	friend complnum operator+(const complnum& comp1, const complnum& comp2);
	friend complnum operator-(const complnum& comp1, const complnum& comp2);
	friend complnum operator*(const complnum& comp1, const complnum& comp2);
	friend complnum operator*(const complnum& comp, const double cons);
	friend complnum operator*(const double cons, const complnum& comp);
	friend complnum operator/(const complnum& comp1, const complnum& comp2);
	friend std::ostream& operator<< (std::ostream& stream, const complnum& comp);

	double abc();
	double arg();
	
	complnum reverse();
	void trigprint();
	complnum deg(int n);
	complnum compl_conjugate();
	void solution_of_equation(int n);
};