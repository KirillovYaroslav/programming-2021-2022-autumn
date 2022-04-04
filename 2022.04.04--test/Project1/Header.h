#pragma once
#include <iostream>

class fraction
{
private:
	long long numerator;
	long long denominator;
public:
	fraction();
	fraction(long long numerator, long long denominator);
	fraction(const fraction& dr);
	~fraction();

	long long getN();
	void setN(int numerator);
	long long getD();
	void setD(int denominator);

	void operator=(const fraction& dr);
	friend fraction operator+(const fraction& dr1, const fraction& dr2);
	friend fraction operator+(const fraction& dr, const long long cons);
	friend fraction operator+(const long long cons, const fraction& dr);

	friend fraction operator-(const fraction& dr1, const fraction& dr2);
	friend fraction operator-(const fraction& dr, const long long cons);
	friend fraction operator-(const long long cons, const fraction& dr);

	friend fraction operator*(const fraction& dr1, const fraction& dr2);
	friend fraction operator*(const fraction& dr, const long long cons);
	friend fraction operator*(const long long cons, const fraction& dr);

	friend fraction operator/(const fraction& dr1, const fraction& dr2);
	friend fraction operator/(const fraction& dr, const long long cons);
	friend fraction operator/(const long long cons, const fraction& dr);

	friend std::ostream& operator<<(std::ostream& stream, const fraction& comp);
	friend bool operator==(const fraction& dr1, const fraction& dr2);
	friend bool operator>=(const fraction& dr1, const fraction& dr2);
	friend bool operator<=(const fraction& dr1, const fraction& dr2);
	friend bool operator<(const fraction& dr1, const fraction& dr2);
	friend bool operator>(const fraction& dr1, const fraction& dr2);

	fraction abs();
	fraction reverse();
	long long gcd();
	fraction norm();
	fraction pow(long long n);
};

