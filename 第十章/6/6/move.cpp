#include "move.h"
#include <iostream>
Move::Move(double a, double b)
{
	x_ = a;
	y_ = b;
}
void Move::showmove() const
{
	std::cout << "(" << x_ << ", " << y_ << ")" << std::endl;
}

Move Move::add(const Move & m) const
{
	Move n = Move(this->x_ + m.x_, this->y_ + m.y_);

	return n;
}

void Move::reset(double a, double b)
{
	x_ = a;
	y_ = b;
}