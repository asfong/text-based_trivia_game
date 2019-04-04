/*************************************************************************
** Program name: Player.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the Player class.
** This class sets up the player object with strength points and has the
** related strength points functions. It also contains the functions to 
** control the player's backpack, including the function of checking 
** whether the player has retrieved the golden snitch - without it,
** the player cannot win the game.
*************************************************************************/
#include "Player.hpp"

//constructor
Player::Player() {
	//each player is constructed with 25 strength points/moves to limit
	//the number of steps
	strengthPoints = 25;
}

//putInBackpack() - places the items in the backpack vector. If the vector
//reaches 25 - the maximum amount, the player loses the game
void Player::putInBackpack(std::string item) {
	
	//check if backpack is full
	if (backpack.size() == 25) {
		std::cout << "Uh-oh. Your backpack is now full. GAME OVER." << std::endl;
		return;
	}
	else {
		backpack.push_back(item);
	}
	

}

//printBackpack() - displays to the console the contents of the backpack
void Player::printBackpack() {

	std::cout << "Your backpack contains: " << std::endl;

	for (int i = 0; i < backpack.size(); i++) {
		std::cout << " [ " << backpack[i] << " ] " << std::endl;
	}

}

//checkGoldenSnitch() - checks to see if player has retrieved the golden
//snitch. Without it, the player cannot win the game.
bool Player::checkGoldenSnitch() {

	for (int i = 0; i < backpack.size(); i++) {
		if (backpack[i] == "GOLDEN SNITCH") {
			return true;
		}
	}
	return false;
}

//strengthPoints functions
int Player::getStrengthPoints() {
	return strengthPoints;
}

//setStrengthPoints() - for every move made, 1 strength point is 
//decremented
int Player::setStrengthPoints(int moveMade) {

	strengthPoints = strengthPoints - moveMade;

	return strengthPoints;
}

//checkStrengthPoints() - checks how many strength points are
//remaining
bool Player::checkStrengthPoints() {

	if (strengthPoints > 1) {
		return true;
	}

	return false;
}


//destructor
Player::~Player() {

}