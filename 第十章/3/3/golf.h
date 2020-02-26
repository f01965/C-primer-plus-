#pragma once
const int Len = 40;
class golf
{
private:
	char  fullname_[Len];
	int   handicap_;
public:
	golf();
	golf(const char * name, int hc);
	const golf & setgolf(const golf & g);
	void handicap(int hc);
	void showgolf();
};