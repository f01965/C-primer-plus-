#include "time.h"
#include <iostream>

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}
Time operator + (const Time & t1, const Time & t2)
{
	Time sum;
	sum.minutes = t1.minutes + t2.minutes;
	sum.hours = t1.hours + t2.hours + sum.minutes / 60;
	sum.minutes = sum.minutes % 60;
	return sum;
}
Time operator - (const Time & t1, const Time & t2)
{
	Time sub;
	int total1, total2;
	total1 = t1.hours * 60 + t1.minutes;
	total2 = t2.hours * 60 + t2.minutes;
	sub.hours = (total1 - total2)/60;
	sub.minutes = (total1 - total2) % 60;
	return sub;
}
Time operator*(const Time & t1, double n)
{
	Time mul;
	int t;
	t = t1.hours * 60 * n + t1.minutes*n;
	mul.hours = t / 60;
	mul.minutes = t % 60;
	return mul;
}
std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}