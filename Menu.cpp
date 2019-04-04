/*************************************************************************
** Program name: Menu.cpp
** Author: Ashley Fong
** Date: August 12, 2017
** Description: This is the implementation file for the Menu class.
** This class includes functions to add the different choices into the
** menu presented to the player in each Space and controls the display
** of the options to the console.
*************************************************************************/
#include "Menu.hpp"

//constructor
Menu::Menu() {

}

//addChoice() - adds menu choice string into vector
void Menu::addChoice(std::string item) {

	menuItems.push_back(item);

}

//getChoice() - displays the choices to the console and asks the player
//for their selection
int Menu::getChoice() {

	int choice;

	for (int i = 0; i < menuItems.size(); i++) {
		std::cout << "(" << (i + 1) << "): " << menuItems[i] << std::endl;
	}

	do {
		std::cout << "Please enter your selection: ";
		std::cin >> choice;
	} while (!validateInteger(choice, 1, 3));

	return choice;
	
}

//destructor
Menu::~Menu() {

}