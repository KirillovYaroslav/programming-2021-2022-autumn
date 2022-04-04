#include "Header.h"
#include <iostream>


fraction::fraction():numerator(0), denominator(1) {}
fraction::fraction(long long numerator, long long denominator): numerator(numerator), denominator(denominator){}

fraction::fraction(const fraction& dr): numerator(dr.numerator), denominator(dr.denominator) {}



fraction::~fraction()
{
	this->numerator = 0;
	this->denominator = 0;
}

long long fraction::getN()
{
	return this->numerator;
}

void fraction::setN(int numerator)
{
	this->numerator = numerator;
}

long long fraction::getD()
{
	return this->denominator;
}

void fraction::setD(int denominator)
{
	this->denominator = denominator;
}
void fraction::operator=(const fraction& dr)
{
	this->numerator = dr.numerator;
	this->denominator = dr.denominator;
}

fraction fraction::abs()
{
	if (this->denominator > 0 && this->numerator > 0)
	{
		return fraction(this->numerator, this->denominator);
	}
	if (this->denominator < 0 && this->numerator > 0)
	{
		return fraction(this->numerator, -this->denominator);
	}
	if (this->denominator < 0 && this->numerator < 0)
	{
		return fraction(-this->numerator, -this->denominator);
	}
	if (this->denominator > 0 && this->numerator < 0)
	{
		return fraction(-this->numerator, this->denominator);
	}
	
}

fraction fraction::reverse()
{
	return fraction(this->denominator, this->numerator);
}

fraction fraction::pow(long long n)
{
	long long p = 1;
	long long q = 1;
	for (long long i = 0; i < n; ++i)
	{
		p *= this->numerator;
		q *= this->denominator;
	}
	return fraction(p,q);
}

long long fraction::gcd()
{
		long long P = 0;
		int Q = 0;
		P = this->numerator;
		Q = this->denominator;
		if (P < 0)
		{
			P = P * (-1);
		}
		if (Q < 0)
		{
			Q = Q * (-1);
		}
		while (P != Q)
		{
			if (P > Q)
			{
				P -= Q;
			}
			else
			{
				Q -= P;
			}
		}
		return P;
}


fraction fraction::norm()
{
	long long P = 0;
	int Q = 0;
	P = this->numerator;
	Q = this->denominator;
	if (P == 0)
	{
		return fraction(0, 1);
	}
	else
	{
		if (P < 0)
		{
			P = P * (-1);
		}
		if (Q < 0)
		{
			Q = Q * (-1);
		}
		while (P != Q)
		{
			if (P > Q)
			{
				P -= Q;
			}
			else
			{
				Q -= P;
			}
		}
		return fraction(this->numerator / P, this->denominator / P);
	}
}


std::ostream& operator<<(std::ostream& stream, const fraction& dr)
{
	if (dr.numerator!=0 &&  dr.denominator != 0 && dr.denominator != 1 && dr.denominator != -1)
	{
		stream<< dr.numerator<<" / "<< dr.denominator;
	}
	else if (dr.numerator != 0 && dr.denominator == 1)
	{
		stream << dr.numerator;
	}
	else if (dr.numerator != 0 && dr.denominator == -1)
	{
		stream << -dr.numerator;
	}
	else if (dr.numerator == 0 && dr.denominator != 0)
	{
		stream << 0;
	}
	else if(dr.denominator == 0)
	{
		stream << " uncertainty ";
	}
	return stream;
}

bool operator==(const fraction& dr1, const fraction& dr2)
{
	long long a1 = 0;
	long long a2 = 0;
	long long a3 = 0;
	long long a4 = 0;
	
	a1 = dr1.numerator;
	a2 = dr2.numerator;
	a3 = dr1.denominator;
	a4 = dr2.denominator;
	if (a1 * a4 == a3 * a2 && a3 * a4 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator>=(const fraction& dr1, const fraction& dr2)
{
	long long a1 = 0;
	long long a2 = 0;
	long long a3 = 0;
	long long a4 = 0;

	a1 = dr1.numerator;
	a2 = dr2.numerator;
	a3 = dr1.denominator;
	a4 = dr2.denominator;
	if (a1 * a4 >= a3 * a2 && a3 * a4 > 0 || a1 * a4 <= a3 * a2 && a3 * a4 < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<=(const fraction& dr1, const fraction& dr2)
{
	long long a1 = 0;
	long long a2 = 0;
	long long a3 = 0;
	long long a4 = 0;

	a1 = dr1.numerator;
	a2 = dr2.numerator;
	a3 = dr1.denominator;
	a4 = dr2.denominator;
	if (a1 * a4 <= a3 * a2 && a3 * a4 > 0 || a1 * a4 >= a3 * a2 && a3 * a4 < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<(const fraction& dr1, const fraction& dr2)
{
	long long a1 = 0;
	long long a2 = 0;
	long long a3 = 0;
	long long a4 = 0;

	a1 = dr1.numerator;
	a2 = dr2.numerator;
	a3 = dr1.denominator;
	a4 = dr2.denominator;
	if (a1 * a4 < a3 * a2 && a3 * a4 > 0 || a1 * a4 > a3 * a2 && a3 * a4 < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator>(const fraction& dr1, const fraction& dr2)
{
	long long a1 = 0;
	long long a2 = 0;
	long long a3 = 0;
	long long a4 = 0;

	a1 = dr1.numerator;
	a2 = dr2.numerator;
	a3 = dr1.denominator;
	a4 = dr2.denominator;
	if (a1 * a4 > a3 * a2 && a3 * a4 > 0 || a1 * a4 < a3 * a2 && a3 * a4 < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}



fraction operator+(const fraction& dr1, const fraction& dr2)
{
	fraction fr(dr1.numerator * dr2.denominator + dr1.denominator * dr2.numerator, dr1.denominator * dr2.denominator);
	return fr.norm();
}

fraction operator+(const fraction& dr, const long long cons)
{
	fraction fr(dr.denominator * cons + dr.numerator, dr.denominator);
	return fr.norm();
}

fraction operator+(const long long cons, const fraction& dr)
{
	fraction fr(dr.denominator * cons + dr.numerator, dr.denominator);
	return fr.norm();
}


fraction operator-(const fraction& dr1, const fraction& dr2)
{
	fraction fr(dr1.numerator * dr2.denominator - dr1.denominator * dr2.numerator, dr1.denominator * dr2.denominator);
	return fr.norm();
}

fraction operator-(const fraction& dr, const long long cons)
{
	fraction fr(-dr.denominator * cons + dr.numerator, dr.denominator);
	return fr.norm();
}

fraction operator-(const long long cons, const fraction& dr)
{
	fraction fr(-dr.denominator * cons + dr.numerator, dr.denominator);
	return fr.norm();
}


fraction operator*(const fraction& dr1, const fraction& dr2)
{
	
	fraction fr(dr1.numerator * dr2.numerator, dr1.denominator * dr2.denominator);
	return fr.norm();
	
}

fraction operator*(const fraction& dr, const long long cons)
{
	fraction fr(dr.numerator * cons, dr.denominator);
	return fr.norm();
}

fraction operator*(const long long cons, const fraction& dr)
{
	fraction fr(dr.numerator * cons, dr.denominator);
	return fr.norm();
}


fraction operator/(const fraction& dr1, const fraction& dr2)
{
	fraction fr(dr1.numerator *dr2.denominator, dr1.denominator *dr2.numerator);
	return fr.norm();
}

fraction operator/(const fraction& dr, const long long cons)
{
	fraction fr(dr.numerator, dr.denominator * cons);
	return fr.norm();
}

fraction operator/(const long long cons, const fraction& dr)
{
	fraction fr(cons * dr.denominator, dr.numerator);
	return fr.norm();
}

