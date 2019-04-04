/*************************************************************************
** Program name: GreatHall.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the GreatHall class.
** It includes the constructor that sets up the class with its specific
** geographic details and the move() function that simulates the 'move'
** to and from each 'Space' depending on the player's choice selection.
*************************************************************************/
#include "GreatHall.hpp"

//constructor sets up the description, places the player in the 'Space'
//and sets up the options for the player
GreatHall::GreatHall(Player* p1) {

	std::string description =
		"\n-----You're currently in the Great Hall.-----"
		"\nFrom a bird's eye view: The Divination Tower is next immediate"
		"\nroom to the north, and a the Hospital Wing is to the west."
		"\nWhat do you want to do?";

	//sets the description of the 'Space'
	this->setDescription(description);

	//places the player in the 'Space'
	this->p1 = p1;

	//options for the player
	this->setMenu("Head to class - first up, Divination.");
	this->setMenu("Feign sickness - 'I'm not feeling well - cough, cough'.");

}

//move() - this function checks if the player has any strength points remaining,
//prints the contents of the player's backpack and displays onto the console
//the Space's description and options the player can select from. After a
//selection, the move() function directs the player to the next appropriate
//space, simulating a 'move' in the game
void GreatHall::move() {

	//check if any strength points remain
	if (!p1->checkStrengthPoints()) {
		std::cout << "Strength points depleted. GAME OVER." << std::endl;
		return;
	}

	std::cout << std::endl;

	//print contents of player's backpack
	p1->printBackpack();

	//display onto console this Space's description
	std::cout << this->description << std::endl;

	//displays the different choices to the player and asks for a selection
	int choice = this->choices.getChoice();

	switch (choice) {

	//choice 1 = head to Divination Tower
	case 1: 
		p1->setStrengthPoints(1);
		this->top->move();
		break;

	//choice 2 = head to Hospital
	case 2: 
		p1->setStrengthPoints(1);
		this->left->move();
		break;

	}


}