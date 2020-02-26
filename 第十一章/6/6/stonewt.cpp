#include "stonewt.h"

Stonewt::Stonewt()
{
	stone_ = 0;
	pounds_ = 0.0;
	pds_left = 0.0;
	mode_ = STN;
}
Stonewt::Stonewt(double st, Mod md)
{
	stone_ = int(st) / Lbs_per_stn;    // integer division
	pds_left = int(st) % Lbs_per_stn + st - int(st);
	pounds_ = st;
	mode_ = md;
}
Stonewt::~Stonewt()         // destructor
{
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
	if (st.mode_ == Stonewt::STN)
		std::cout << st.stone_ << " stone, " << st.pounds_ << "pounds";
	else if (st.mode_ == Stonewt::Pound)
		std::cout << st.pounds_ << " pounds";
	else
		std::cout << "Incorrect status";
	return os;
}
void Stonewt::set_STN()
{
	mode_ = STN;
}
void Stonewt::set_Pound()
{
	mode_ = Pound;
}