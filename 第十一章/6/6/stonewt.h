#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
	enum Mod{ STN, Pound };
private:
	enum{ Lbs_per_stn = 14 };
	int stone_;
	double pounds_;
	double pds_left;
	Mod    mode_;

public:
	Stonewt();
	Stonewt(double st, Mod md = STN);
	~Stonewt();
	bool operator<(const Stonewt & st) const
	{
		return pounds_ < st.pounds_;
	}
	bool operator>(const Stonewt & st) const
	{
		return pounds_ > st.pounds_;
	}
	bool operator==(const Stonewt & st) const
	{
		return pounds_ == st.pounds_;
	}
	bool operator<=(const Stonewt & st) const
	{
		return pounds_ <= st.pounds_;
	}
	bool operator>=(const Stonewt & st) const
	{
		return pounds_ >= st.pounds_;
	}
	bool operator!=(const Stonewt & st) const
	{
		return pounds_ != st.pounds_;
	}
	void set_STN();
	void set_Pound();
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);


};

#endif