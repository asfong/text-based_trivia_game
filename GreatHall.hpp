/*************************************************************************
** Program name: GreatHall.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the GreatHall class. It is a
** derived class from the Space class.
*************************************************************************/
#include "Space.hpp"

#ifndef GREATHALL_HPP
#define GREATHALL_HPP

class GreatHall : public Space {

private:
	Player* p1;

public:
	GreatHall(Player* p1);
	void move();

};

#endif // !GREATHALL_HPP

