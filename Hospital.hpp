/*************************************************************************
** Program name: Hospital.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the Hospital class. It is a
** derived class from the Space class.
*************************************************************************/
#include "Space.hpp"

class Hospital : public Space {

private:
	Player* p1;

public:
	Hospital(Player* p1);
	void move();

};

#ifndef HOSPITAL_HPP
#define HOSPITAL_HPP

#endif // !HOSPITAL_HPP
