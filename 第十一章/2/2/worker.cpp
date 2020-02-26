#include "worker.h"
#include <iostream>
namespace WORKER
{
	const double Rad_to_deg = 45.0 / atan(1.0);
	void  Worker::set_x()
	{
		x_ = m_*cos(a_);
	}
	void  Worker::set_y()
	{
		y_ = m_*sin(a_);
	}
	void  Worker::set_m()
	{
		m_ = sqrt(x_*x_ + y_*y_);
	}
	void  Worker::set_a()
	{
		if (x_ == 0.0 || y_ == 0.0)
		{
			a_ = 0.0;
		}
		else
		{
			a_ = atan2(y_, x_);
		}
	}
	double Worker::m_val() 
	{
		set_m();
		return m_;
	}
	double Worker::a_val()
	{
		set_a();
		return a_;
	}
	Worker::Worker()
	{
		x_ = y_ = m_ = a_ = 0.0;
		mod_ = RECT;
	}
	Worker::Worker(double x, double y, Mode mod)
	{
		mod_ = mod;
		if (mod == RECT)
		{
			x_ = x;
			y_ = y;
			set_m();
			set_a();
		}
		else if (mod == POL)
		{
			m_ = x;
			a_ = y / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			std::cout << "Incorrect 3rd argument .. \n" << "Use default parameters. \n";
			x_ = y_ = m_ = a_ = 0.0;
			mod = RECT;
		}
	}
	void Worker::reset(double x, double y, Mode mod)
	{
		mod_ = mod;
		if (mod == RECT)
		{
			x_ = x;
			y_ = y;
			set_m();
			set_a();
		}
		else if (mod == POL)
		{
			m_ = x;
			a_ = y / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			std::cout << "Incorrect 3rd argument .. \n" << "Use default parameters. \n";
			x_ = y_ = m_ = a_ = 0.0;
			mod = RECT;
		}
	}

	Worker::~Worker(){}

	Worker Worker::operator+(const Worker & wor) const
	{
		return Worker(x_ + wor.x_,  y_ + wor.y_);
	}
	Worker Worker::operator-(const Worker & wor) const
	{
		return Worker(x_ - wor.x_, y_ - wor.y_);
	}
	Worker Worker::operator-() const 
	{
		return Worker(-x_, -y_);
	}
	std::ostream & operator << (std::ostream & os, const Worker & wor)
	{
		if (wor.mod_ == Worker::RECT)
		{
			os << "(x,y) = (" << wor.x_ << "," << wor.y_ << ")";
		}
		else if (wor.mod_ == Worker::POL)
		{
			os << "(m,a) = (" << wor.m_ << "," << wor.a_ *Rad_to_deg << ")";
		}
		else
		{
			os << "Mode Error...\n";
		}
		return os;
	}

	void Worker::mod_rec()
	{
		mod_ = RECT;
	}
	void Worker::mod_pol()
	{
		mod_ = POL;
	}

}