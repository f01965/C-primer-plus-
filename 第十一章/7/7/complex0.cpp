#include "complex0.h"

complex::complex()
{
	real_ = 0.0;
	unrel_ = 0.0;
}
complex::complex(double real, double unrel)
{
	real_ = real;
	unrel_ = unrel;
}
complex::~complex()
{
}
complex complex::operator + (const complex cp) const
{
	complex sum;
	sum.real_ = real_ + cp.real_;
	sum.unrel_ = unrel_ + cp.unrel_;
	return sum;
}
complex complex::operator - (const complex cp) const
{
	complex sub;
	sub.real_ = real_ - cp.real_;
	sub.unrel_ = unrel_ - cp.unrel_;
	return sub;
}
complex complex::operator * (const complex cp) const
{
	complex mul;
	mul.real_ = real_ * cp.real_ - unrel_*cp.unrel_;
	mul.unrel_ = unrel_*cp.unrel_ + unrel_*cp.real_;
	return mul;
}
complex complex::operator*(double n) const
{
	complex mul; 
	mul.real_ = n*real_;
	mul.unrel_ = n*unrel_;
	return mul;
}
complex complex::operator~() const
{
	complex diff;
	diff.real_ = real_;
	diff.unrel_ = 0 - unrel_;
	return diff;
}
complex operator*(double n, const complex & cp)
{
	complex mul;
	mul.real_ = n*cp.real_;
	mul.unrel_ = n*cp.unrel_;
	return mul;
}
std::ostream & operator<<(std::ostream & os, const complex & cp)
{
	os << "(" << cp.real_ << "," << cp.unrel_ << "i)\n";
	return os;
}
std::istream & operator>>(std::istream & is, complex & cp)
{
	std::cout << "real:";
	is >> cp.real_;
	std::cout << "imaginary:";
	is >> cp.unrel_;
	return is;
}