#ifndef POKERPLAYER_H_
#define POKERPLAYER_H_
#include "person.h"
#include <iostream>

class PokerPlayer :virtual public Person
{
public:
	PokerPlayer() :Person("PokerPlayer", "PokerPlayer"){}
	PokerPlayer(const char *fl, const char *ln) :Person(fl, ln){}
	~PokerPlayer(){}
	int Draw() const;
};
#endif