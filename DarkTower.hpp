/*************************************************************************
** Program name: DarkTower.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the DarkTower class. It is a
** derived class from the Space class.
*************************************************************************/
#include "Space.hpp"

class DarkTower : public Space {

private:
	Player* p1;

public:
	DarkTower(Player* p1);
	void move();

};

#ifndef DARKTOWER_HPP
#define DARKTOWER_HPP

#endif // !DARKTOWER_HPP
