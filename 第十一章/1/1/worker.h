#ifndef WORKER_H_
#define WORKER_H_
#include <iostream>
namespace WORKER
{
	class Worker
	{
	public:
		enum Mode { RECT, POL };
	private:
		double x_;
		double y_;
		double m_;
		double a_;
		Mode   mod_;
		// private methods for setting values;
		void set_x();
		void set_y();
		void set_m();
		void set_a();
	public:
		Worker();
		Worker(double x , double y , Mode mod = RECT);
		~Worker();
		void reset(double x, double y, Mode mod = RECT);
		double x_val() const{ return x_; }
		double y_val() const{ return y_; }
		double m_val() const{ return m_; }
		double a_val() const{ return a_; }
		void  mod_pol();
		void  mod_rec();
		void Write() const;
		// operator overloading
		Worker operator+(const Worker & wor) const;
		Worker operator-(const Worker & wor) const;
		Worker operator-() const;
		// friend function
		friend std::ostream & operator<<(std::ostream & os, const Worker & wor);
	};
}

#endif