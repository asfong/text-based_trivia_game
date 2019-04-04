/*****************************************************************************
** Program name: DivinationTower.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the DivinationTower
** class. It includes the constructor that sets up the class with its specific
** geographic details and the move() function that simulates the 'move'
** to and from each 'Space' depending on the player's choice selection.
******************************************************************************/
#include "DivinationTower.hpp"

//constructor sets up the description, places the player in the 'Space'
//and sets up the options for the player
DivinationTower::DivinationTower(Player* p1) {

	std::string description =
		"\n-----You're currently in the Divination Tower.-----"
		"\nFrom a bird's eye view: Gryffindor Tower is next immediate"
		"\nroom to the north, and to the South is the Grand Hall."
		"\n Welcome to Divination Class. You're up for the first question"
		"\n of the day:"
		"\n -- Which spell can levitate objects? -- ";

	//sets the description of the 'Space'
	this->setDescription(description);

	//places the player in the 'Space'
	this->p1 = p1;

	//options for the player
	this->setMenu("Wingardium Leviosa");
	this->setMenu("Petrificus Totalus");

}

//move() - this function checks if the player has any strength points remaining,
//prints the contents of the player's backpack and displays onto the console
//the Space's description and options the player can select from. After a
//selection, the move() function directs the player to the next appropriate
//space, simulating a 'move' in the game
void DivinationTower::move() {

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

	//choice 1 = head to Gryffindor Tower, add wand into backpack
	case 1: 
		//correct answer
		std::cout << "Correct! You've earned a wand!" << std::endl;
		p1->putInBackpack("A WAND");
		p1->setStrengthPoints(1);
		this->top->move();
		break;

	//choice 2 = head back to Grand Hall
	case 2: 
		//incorrect answer
		std::cout << "Incorrect. Back to the Great Hall." << std::endl;
		p1->setStrengthPoints(1);
		this->bottom->move();
		break;

	}

}