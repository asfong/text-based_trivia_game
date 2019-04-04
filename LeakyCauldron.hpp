/*************************************************************************
** Program name: LeakyCauldron.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the LeakyCauldron class.
** It is a derived class from the Space class.
*************************************************************************/
#include "Space.hpp"

class LeakyCauldron : public Space {

private:
	Player* p1;

public:
	LeakyCauldron(Player* p1);
	void move();

};
