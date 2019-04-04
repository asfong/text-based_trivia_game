/*************************************************************************
** Program name: Space.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the Space class. It is an
** abstract class and is a base class for the different spaces.
*************************************************************************/
#include <iostream>
#include <string>
#include "Player.hpp"
#include "Menu.hpp"

#ifndef SPACE_HPP
#define SPACE_HPP

class Space {
public:
	//constructor
	Space();

	//setter functions
	void setTop(Space*);
	void setRight(Space*);
	void setLeft(Space*);
	void setBottom(Space*);

	//virtual function
	virtual void move() = 0;

	//setting up the interface
	void setDescription(std::string);
	void setMenu(std::string);

	//destructor
	virtual ~Space();

protected:
	Space* top = NULL;
	Space* right = NULL;
	Space* left = NULL;
	Space* bottom = NULL;
	std::string description;
	Menu choices;

};

#endif // !SPACE_HPP

