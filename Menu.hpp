/*************************************************************************
** Program name: Menu.hpp
** Author: Ashley Fong
** Date: August 12, 2017
** Description: This is the header file for the Menu class. 
*************************************************************************/
#include <string>
#include <vector>
#include <iostream>
#include "validateInteger.hpp"

#ifndef MENU_HPP
#define MENU_HPP

class Menu {

protected:
	std::vector<std::string> menuItems;

public:
	Menu();
	void addChoice(std::string);
	int getChoice();
	~Menu();

};



#endif // !MENU_HPP



