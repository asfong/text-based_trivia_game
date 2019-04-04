/*************************************************************************
** Program name: Hospital.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the Hospital class.
** It includes the constructor that sets up the class with its specific
** geographic details and the move() function that simulates the 'move'
** to and from each 'Space' depending on the player's choice selection.
*************************************************************************/
#include "Hospital.hpp"

//constructor sets up the description, places the player in the 'Space'
//and sets up the options for the player
Hospital::Hospital(Player* p1) {

	std::string description =
		"\n-----You're currently in the Hospital Wing.-----"
		"\nFrom a bird's eye view: The Great Hall is next immediate room to the west."
		"\nWelcome to the Hospital Wing. If you're able to answer the next question"
		"\ncorrectly, you've get another shot to start fresh at Hogwarts."
		"\n -- From which platform does the Hogwarts Express depart? -- ";

	//sets the description of the 'Space'
	this->setDescription(description);

	//places the player in the 'Space'
	this->p1 = p1;

	//options for the player
	this->setMenu("Nine and three-quarters");
	this->setMenu("Number 4, Privet Drive");

}

//move() - this function checks if the player has any strength points remaining,
//prints the contents of the player's backpack and displays onto the console
//the Space's description and options the player can select from. After a
//selection, the move() function directs the player to the next appropriate
//space, simulating a 'move' in the game
void Hospital::move() {

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

		//choice 1 = head back to the Grand Hall
	case 1:
		//correct answer
		std::cout << "Correct! Back to the Grand Hall you go..." << std::endl;
		p1->setStrengthPoints(1);
		this->right->move();
		break;

		//choice 2 = game over
	case 2:
		//incorrect answer
		std::cout << "Incorrect. Better luck time. Goodbye." << std::endl;
		return;

	}

}