#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class complex
{
private:
	double real_;
	double unrel_; //unreliable figure;
public:
	complex();
	complex(double real, double unrel);
	~complex();

	complex operator+(const complex cp) const;
	complex operator-(const complex cp) const;
	complex operator*(const complex cp) const;
	complex operator*(double n) const;
	complex operator~() const;
	friend complex operator*(double n, const complex & cp);
	friend std::ostream & operator<<(std::ostream & os, const complex & cp);
	friend std::istream & operator>>(std::istream & is, complex & cp);
};

#endif