#include "Header.h"
#include <iostream>

#include <cmath>

complnum::complnum(double a, double b) :a(a), b(b){}

complnum::complnum(const complnum& comp) : a(comp.a), b(comp.b) {}

complnum::~complnum()
{
	this->a = 0;
	this->b = 0;
}


double complnum::getA()
{
	return this->a;
}

void complnum::setA(double a)
{
	this->a = a;
}

double complnum::getB()
{
	return this->b;
}

void complnum::setB(double b)
{
	this->b = b;
}

void complnum::set(double a, double b)
{
	this->a = a;
	this->b = b;
}

void complnum::print()
{
	if (this->b < 0 && this->b!=-1)
	{
		std::cout << this->a << " - " << -this->b << "i";
	}
	else if (this->b == -1)
	{
		std::cout << this->a << " - " << "i";
	}
	else if (this->b == 1)
	{
		std::cout << this->a << " + " << "i";
	}
	else if (this->b > 0 && this->b != 1)
	{
		std::cout << this->a << " + " << this->b << "i";
	}
	else if (this->b == 0)
	{
		std::cout << this->a ;
	}
}

void complnum::operator=(const complnum& comp)
{
	this->a = comp.a;
	this->b = comp.b;
}

complnum operator+(const complnum& comp1, const complnum& comp2)
{
	return complnum(comp1.a + comp2.a, comp1.b + comp2.b);
}

complnum operator-(const complnum& comp1, const complnum& comp2)
{
	return complnum(comp1.a-comp2.a, comp1.b - comp2.b);
}


complnum operator/(const complnum& comp1, const complnum& comp2)
{
	return complnum((comp1.a * comp2.a + comp1.b * comp2.b) / (comp2.a * comp2.a + comp2.b * comp2.b), (-comp1.a * comp2.b + comp1.b * comp2.a) / (comp2.a * comp2.a + comp2.b * comp2.b));
}

double complnum::abs()
{
	return sqrt(this->a * this->a + this->b * this->b);
}

double complnum::arg()
{
	if (this->a > 0)
	{
		return atan(this->b / this->a);
	}
	if (this->a < 0)
	{
		return atan(this->b / this->a) + 3.14159265;
	}
	if (this->a == 0 && this->b > 0)
	{
		return  3.14159265/2;
	}
	if (this->a == 0 && this->b < 0)
	{
		return  -3.14159265 / 2;
	}
	if (this->a == 0 && this->b == 0)
	{
		return  0;
	}
}

void complnum::trigprint()
{
	double arg = 0;
	double abc = 0;

	abc = sqrt(this->a * this->a + this->b * this->b);

	if (this->a > 0)
	{
		arg = atan(this->b / this->a);
	}
	if (this->a < 0)
	{
		arg = atan(this->b / this->a) + 3.14159265;
	}
	if (this->a == 0 && this->b > 0)
	{
		arg = 3.14159265 / 2;
	}
	if (this->a == 0 && this->b < 0)
	{
		arg = -3.14159265 / 2;
	}
	if (this->a == 0 && this->b == 0)
	{
		arg = 0;
	}

	std::cout << abc <<" * (cos(" << arg << ")" << " + " << "i * sin(" << arg << "))";
}

complnum complnum::deg(int n)
{
	double aa = 0;
	double bb = 0;
	aa = this->a;
	bb = this->b;

	for (int i = 1; i < n; ++i)
	{
		double cons = aa;
		aa = aa * this->a - bb * this->b;
		bb = this->a * bb + cons * this->b;
	}

	return complnum(aa, bb);
}

complnum complnum::compl_conjugate()
{
	return complnum(this->a = a, this->b = -b);
}

void complnum::solution_of_equation(int n)
{
	double arg = 0;
	double abc = 0;

	abc = sqrt(this->a * this->a + this->b * this->b);
	abc = pow(abc, 1.0 / n);

	if (this->a > 0)
	{
		arg = atan(this->b / this->a);
	}
	if (this->a < 0)
	{
		arg = atan(this->b / this->a) + 3.14159265;
	}
	if (this->a == 0 && this->b > 0)
	{
		arg = 3.14159265 / 2;
	}
	if (this->a == 0 && this->b < 0)
	{
		arg = -3.14159265 / 2;
	}
	if (this->a == 0 && this->b == 0)
	{
		arg = 0;
	}

	std::cout << abc << " * (cos(" << arg / n << " + 2 * pi / " << n << ") + i * sin(" << arg / n << "+ 2 * pi / " << n << "))";
}

complnum operator*(const complnum& comp1, const complnum& comp2)
{
	return complnum(comp1.a * comp2.a - comp2.b * comp2.b, comp1.a * comp2.b + comp1.b * comp1.a);
}

complnum operator*(const complnum& comp, const double cons)
{
	return complnum(comp.a*cons, comp.b * cons);
}

complnum operator*(const double cons, const complnum& comp)
{
	return complnum(comp.a * cons, comp.b * cons);
}

std::ostream& operator<<(std::ostream& stream, const complnum& comp)
{
	if (comp.b < 0 && comp.b != -1)
	{
		stream << comp.a << " - " << -comp.b << "i";
	}
	else if (comp.b == -1)
	{
		stream << comp.a << " - " << "i";
	}
	else if (comp.b == 1)
	{
		stream << comp.a << " + " << "i";
	}
	else if (comp.b > 0 && comp.b != 1)
	{
		stream << comp.a << " + " << comp.b << "i";
	}
	else if (comp.b == 0)
	{
		stream << comp.a;
	}
	return stream;
}

complnum complnum::reverse()
{
	return complnum(this->a/(this->a* this->a+ this->b* this->b), -this->b/(this->a * this->a + this->b * this->b));
}







