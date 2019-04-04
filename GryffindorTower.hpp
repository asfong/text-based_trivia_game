/*************************************************************************
** Program name: GryffindorTower.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the Gryffindor Tower class.
** It is a derived class from the Space class.
*************************************************************************/
#include "Space.hpp"

#ifndef GRYFFINDORTOWER_HPP
#define GRYFFINDORTOWER_HPP

class GryffindorTower : public Space {

private:
	Player* p1;

public:
	GryffindorTower(Player* p1);
	void move();

};

#endif // !GRYFFINDORTOWER_HPP
