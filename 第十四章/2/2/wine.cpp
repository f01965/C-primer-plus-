#include "wine.h"
#include <string>
/*
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
std::string  label_;
PairArray    data_;
int          years_;
*/
Wine::Wine() :std::string("none"), PairArray(ArrayInt(0), ArrayInt(0)), years_(0)
{
}
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : std::string(l), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)), years_(y)
{
}
Wine::Wine(const char *l, int y) : std::string(l), PairArray(ArrayInt(y), ArrayInt(y)), years_(y)
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
	cout << "Enter " << std::string() << " data for " << years_ << " year(s)" << endl;
	for (int i = 0; i < years_; ++i)
	{
		cout << "Enter year:";
		cin >> y;
		PairArray::first()[i] = y;
		cout << "Enter bottles for that year: ";
		cin >> b;
		PairArray::second()[i] = b;
	}
}

int Wine::mysum() const
{
	return PairArray::second().sum();
}
void Wine::Show() const
{
	std::cout << "Wine: " << (const std::string &) *this << std::endl;
	std::cout << "    Year  " << "  Bottles" << std::endl;
	for (int i = 0; i < years_; ++i)
	{
		std::cout << "    " << PairArray::first()[i] << "    ";
		std::cout << PairArray::second()[i] << std::endl;
	}
}