#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <valarray>
#include <string>
#include "pairs.h"
class Wine
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	std::string  label_;
	PairArray    data_;
	int          years_;
public:
	Wine();
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	~Wine();
	void GetBottles();
	const std::string & Label() const { return label_; }
	int mysum() const;
	void Show() const;
};


#endif
