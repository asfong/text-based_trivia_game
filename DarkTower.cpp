/*************************************************************************
** Program name: DarkTower.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the DarkTower class.
** It includes the constructor that sets up the class with its specific
** geographic details and the move() function that simulates the 'move'
** to and from each 'Space' depending on the player's choice selection.
*************************************************************************/
#include "DarkTower.hpp"

//constructor sets up the description, places the player in the 'Space'
//and sets up the options for the player
DarkTower::DarkTower(Player* p1) {

	std::string description =
		"\n-----You're currently in the Dark Tower.-----"
		"\nFrom a bird's eye view: Gryffindor Tower is next immediate"
		"\nroom to the east, and to the north is the Quidditch Field."
		"\nHow's your familiarity with Harry's past?"
		"\n -- Which village are James and Lily Potter living in when they are killed? -- ";

	//sets the description of the 'Space'
	this->setDescription(description);

	//places the player in the 'Space'
	this->p1 = p1;

	//options for the player
	this->setMenu("Godric's Hollow");
	this->setMenu("Gringott's Village");

}

//move() - this function checks if the player has any strength points remaining,
//prints the contents of the player's backpack and displays onto the console
//the Space's description and options the player can select from. After a
//selection, the move() function directs the player to the next appropriate
//space, simulating a 'move' in the game
void DarkTower::move() {

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

		//choice 1 = head to the Quidditch Field, add Firebolt into backpack
	case 1:
		//correct answer
		std::cout << "Correct! You've earned a Firebolt broom!" << std::endl;
		p1->putInBackpack("FIREBOLT");
		p1->setStrengthPoints(1);
		this->top->move();
		break;

		//choice 2 = head back to Gryffindor Tower
	case 2:
		//incorrect answer
		std::cout << "Incorrect. Back to Gryffindor Tower." << std::endl;
		p1->setStrengthPoints(1);
		this->right->move();
		break;

	}

}
