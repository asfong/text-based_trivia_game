/*************************************************************************
** Program name: DivinationTower.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the DivinationTower class. It 
** is a derived class from the Space class.
*************************************************************************/
#include "Space.hpp"

#ifndef DIVINATIONTOWER_HPP
#define DIVINATIONTOWER_HPP

class DivinationTower : public Space {

private:
	Player* p1;

public:
	DivinationTower(Player* p1);
	void move();

};

#endif // !DIVINATIONTOWER_HPP

