#include "stonewt.h"

Stonewt::Stonewt()
{
	stone_ = 0;
	pounds_ = 0.0;
	pds_float_ = 0.0;
	md_ = STN;
}
Stonewt::Stonewt(double st, Mod md )
{
	stone_ = int(st) / Lbs_per_stn;    // integer division
	pds_float_ = int(st) % Lbs_per_stn + st - int(st);
	pounds_ = st;
	md_ = md;
}
Stonewt::~Stonewt()         // destructor
{
}
Stonewt Stonewt::operator + (const Stonewt & st1)
{
	double pds_sum = pounds_ + st1.pounds_;
	Stonewt sum = Stonewt(pds_sum);
	return sum;
}
Stonewt Stonewt::operator-(const Stonewt & st1) 
{
	double pds_diff = pounds_ - st1.pounds_;
	Stonewt diff = Stonewt(pds_diff);
	return diff;
}

Stonewt Stonewt::operator*(double p) 
{
	double multi = pounds_ * p;
	return Stonewt(multi);
}
std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
	if (st.md_ == Stonewt::STN)
		std::cout << st.stone_ << " stone, " << st.pounds_ << "pounds";
	else if (st.md_ == Stonewt::Pound)
		std::cout << st.pounds_ << " pounds";
	else if (st.md_ == Stonewt::PDS_Float)
		std::cout << "Float :" << st.pds_float_ << " pounds";
	else 
		std::cout << "Incorrect status";
	return os;
}
void Stonewt::set_STN()
{
	md_ = STN;
}
void Stonewt::set_Pound()
{
	md_ = Pound;
}
void Stonewt::set_PDS_Float()
{
	md_ = PDS_Float;
}