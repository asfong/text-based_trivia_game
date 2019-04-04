/*************************************************************************
** Program name: QuidditchField.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the QuidditchField class.
** It is a derived class from the Space class.
*************************************************************************/
#include "Space.hpp"

class QuidditchField : public Space {

private:
	Player* p1;

public:
	QuidditchField(Player* p1);
	void move();

};


#ifndef QUIDDITCHFIELD_HPP
#define QUIDDITCHFIELD_HPP

#endif // !QUIDDITCHFIELD_HPP
