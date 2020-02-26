#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
	enum Mod{ STN, Pound, PDS_Float };
private:
	enum{Lbs_per_stn = 14};
	int stone_;
	double pounds_;
	double pds_float_;
	Mod    md_;

public:
	Stonewt();
	Stonewt(double st, Mod md = STN);
	~Stonewt();
	Stonewt operator + (const Stonewt & st1) ;
	Stonewt operator - (const Stonewt & st1) ;
	Stonewt operator * (double dnum) ;
	void set_STN();
	void set_Pound();
	void set_PDS_Float();
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
	friend Stonewt operator * (double dnum,  Stonewt & st1) { return st1 * dnum; };

};

#endif