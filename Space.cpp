/*************************************************************************
** Program name: Space.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the Space class. It
** includes setter functions to position the Space pointers. In addition,
** this class contains the virtual function move(), which is used in every
** derived class. Space also contains the functions to set up the game's
** interface.
*************************************************************************/
#include "Space.hpp"

//constructor - empty - abstract class, cannot be instantiated
Space::Space() {

}

//setter functions for the Space pointers
void Space::setTop(Space* tSpace) {

	this->top = tSpace;

}

void Space::setRight(Space* rSpace) {

	this->right = rSpace;

}

void Space::setLeft(Space* lSpace) {

	this->left = lSpace;

}

void Space::setBottom(Space* bSpace) {

	this->bottom = bSpace;

}

//virtual function - used in every derived class to make the 'move'
//to each space
void Space::move() {

}

//setDescription() - sets up the interface with each description
void Space::setDescription(std::string description) {

	this->description = description;

}

//setMenu() - sets up the interface with the different choices
//available at each 'Space'
void Space::setMenu(std::string option) {

	choices.addChoice(option);

}


//destructor
Space::~Space() {

}