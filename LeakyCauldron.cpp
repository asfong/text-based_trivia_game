/******************************************************************************
** Program name: LeakyCauldron.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the LeakyCauldron
** class. It includes the constructor that sets up the class with its specific
** geographic details and the move() function that simulates the 'move'
** to and from each 'Space' depending on the player's choice selection.
******************************************************************************/
#include "LeakyCauldron.hpp"

//constructor sets up the description, places the player in the 'Space'
//and sets up the options for the player
LeakyCauldron::LeakyCauldron(Player* p1) {

	std::string description =
		"\n-----You're currently in the Leaky Cauldron.-----"
		"\nFrom a bird's eye view: Gryffindor Tower is next immediate"
		"\nroom to the south, and to the west is the Quidditch Field."
		"\nCongratulations - you've made it to the Leaky Cauldron."
		"\nTo enjoy a mug of frosty butterbeer, answer this first:"
		"\n -- Which spell can unlock doors?  -- ";

	//sets the description of the 'Space'
	this->setDescription(description);

	//places the player in the 'Space'
	this->p1 = p1;

	//options for the player
	this->setMenu("Alohomora");
	this->setMenu("Locomotor Mortis");

}

//move() - this function checks if the player has any strength points remaining,
//prints the contents of the player's backpack and displays onto the console
//the Space's description and options the player can select from. After a
//selection, the move() function directs the player to the next appropriate
//space, simulating a 'move' in the game
void LeakyCauldron::move() {

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

		//choice 1 = check for Golden Snitch, win game if present and correct
	case 1:
		//correct answer
		//if player does not have golden snitch, head back to Gryffindor Tower
		if (!p1->checkGoldenSnitch()) {
			std::cout << "Oops. Looks like you don't have the magical item in your backpack. Try again." 
				<< std::endl;
			this->bottom->move();
		}
		else {
			std::cout << "Congratulations. You win! Enjoy the butterbeer." << std::endl;
		}
		return;

		//choice 2 = head back to Gryffindor Tower
	case 2:
		//incorrect answer
		std::cout << "Incorrect. Back to Gryffindor Tower." << std::endl;
		this->bottom->move();
		break;

	}

}