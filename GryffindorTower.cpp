/*****************************************************************************
** Program name: GryffindorTower.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the GryffindorTower
** class. It includes the constructor that sets up the class with its specific
** geographic details and the move() function that simulates the 'move'
** to and from each 'Space' depending on the player's choice selection.
******************************************************************************/
#include "GryffindorTower.hpp"

//constructor sets up the description, places the player in the 'Space'
//and sets up the options for the player
GryffindorTower::GryffindorTower(Player* p1) {

	std::string description =
		"\n-----You're currently in Gryffindor Tower.-----"
		"\nFrom a bird's eye view: the Dark Tower is next immediate"
		"\nroom to the west, and to the south is Divination Tower."
		"\nLet's test your Gryffindor knowledge:"
		"\n -- What subject does Professor McGonagall teach? -- ";

	//sets the description of the 'Space'
	this->setDescription(description);

	//places the player in the 'Space'
	this->p1 = p1;

	//options for the player
	this->setMenu("Transfiguration");
	this->setMenu("Herbology");
	this->setMenu("Divination");

}

//move() - this function checks if the player has any strength points remaining,
//prints the contents of the player's backpack and displays onto the console
//the Space's description and options the player can select from. After a
//selection, the move() function directs the player to the next appropriate
//space, simulating a 'move' in the game
void GryffindorTower::move() {

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

		//choice 1 = head to Dark Tower, add robes into backpack
	case 1:
		//correct answer
		std::cout << "Correct! You've earned wizarding robes!" << std::endl;
		p1->putInBackpack("WIZARDING ROBES");
		this->left->move();
		p1->setStrengthPoints(1);
		break;

		//choice 2 = head back to Divination Tower
	case 2:
		//incorrect answer
		std::cout << "Incorrect. Back to Divination Tower." << std::endl;
		p1->setStrengthPoints(1);
		this->bottom->move();
		break;

		//choice 3 = casts a spell to access the special tunnel to the Leaky Cauldron
	case 3:
		//incorrect answer 
		std::cout << "You've unlocked a secret passageway to the Leaky Cauldron." 
			<< std::endl;
		p1->setStrengthPoints(1);
		this->top->move();
		break;
	}

}