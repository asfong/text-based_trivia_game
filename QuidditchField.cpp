/******************************************************************************
** Program name: QuiddtichField.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the QuidditchField
** class. It includes the constructor that sets up the class with its specific
** geographic details and the move() function that simulates the 'move'
** to and from each 'Space' depending on the player's choice selection.
******************************************************************************/
#include "QuidditchField.hpp"

//constructor sets up the description, places the player in the 'Space'
//and sets up the options for the player
QuidditchField::QuidditchField(Player* p1) {

	std::string description =
		"\n-----You're currently on the Quidditch Field.-----"
		"\nFrom a bird's eye view: the Dark Tower is next immediate"
		"\nroom to the south, and to the east is the Leaky Cauldron."
		"\nDo you know the game of Quidditch?"
		"\n -- What are the four positions on a Quidditch team? -- ";

	//sets the description of the 'Space'
	this->setDescription(description);

	//places the player in the 'Space'
	this->p1 = p1;

	//options for the player
	this->setMenu("Seeker, Keeper, Chaser, Beater");
	this->setMenu("Seeker, Tosser, Chaser, Flagger");

}

//move() - this function checks if the player has any strength points remaining,
//prints the contents of the player's backpack and displays onto the console
//the Space's description and options the player can select from. After a
//selection, the move() function directs the player to the next appropriate
//space, simulating a 'move' in the game
void QuidditchField::move() {

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

		//choice 1 = head to the Leaky Cauldron, add Golden Snitch into backpack
	case 1:
		//correct answer
		std::cout << "Correct! You've caught the Golden Snitch!" << std::endl;
		p1->putInBackpack("GOLDEN SNITCH");
		p1->setStrengthPoints(1);
		this->right->move();
		break;

		//choice 2 = head back to the Dark Tower
	case 2:
		//incorrect answer
		std::cout << "Incorrect. Back to the Dark Tower." << std::endl;
		p1->setStrengthPoints(1);
		this->bottom->move();
		break;

	}

}