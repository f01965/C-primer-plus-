#pragma once
#ifndef MOVE_H_
#define MOVE_H_
class Move
{
private:
	double x_;
	double y_;
public:
	Move(double a = 0, double b = 0);
	void showmove() const;
	Move add(const Move & m) const;
	void reset(double a = 0, double b = 0);
};

#endif // !MOVE_H_
