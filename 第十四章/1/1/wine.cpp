#include "wine.h"
#include <string>
/*
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
std::string  label_;
PairArray    data_;
int          years_;
*/
Wine::Wine() :label_("none"), data_(ArrayInt(0), ArrayInt(0)), years_(0)
{
}
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) :label_(l), data_(ArrayInt(yr, y), ArrayInt(bot, y)), years_(y)
{
}
Wine::Wine(const char *l, int y) : label_(l),data_(ArrayInt(y),ArrayInt(y)), years_(y)
{
}
Wine::~Wine()
{}
void Wine::GetBottles()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int y, b;  // year, bottle
	cout << "Enter " << label_ << " data for " << years_ << " year(s)" << endl;
	for (int i = 0; i < years_; ++i)
	{
		cout << "Enter year:";
		cin >> y;
		data_.first()[i] = y; 
		cout << "Enter bottles for that year: ";
		cin >> b;
		data_.second()[i] = b;
	}
}

int Wine::mysum() const
{
	return data_.second().sum();
}
void Wine::Show() const
{
	std::cout << "Wine: " << label_ << std::endl;
	std::cout << "    Year  " << "  Bottles" << std::endl;
	for (int i = 0; i < years_; ++i)
	{
		std::cout << "    " << data_.first()[i] << "    ";
		std::cout << data_.second()[i] << std::endl;
	}
}