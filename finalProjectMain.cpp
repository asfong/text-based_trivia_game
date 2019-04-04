/*************************************************************************
** Program name: finalProjectMain.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the main for the final project. This game takes
** place at the Hogwarts School of Witchcraft and Wizardry. The goal
** is stated at the beginning of the game - to reach the Leaky Cauldron
** to enjoy a mug of butterbeer. Along the journey, the player will
** encounter different situations at which a decision must be made,
** answer trivia questions, and collect some items as rewards for
** answering correctly.
** citation: Former 162 student Raymond Mason's project 'Test Time' -
** one of the examples provided in the final project prompt.
*************************************************************************/
#include <iostream>
#include "Game.hpp"

int main() {

	std::cout << "Welcome to Hogwarts School of Witchcraft and Wizardry!" << std::endl;
	std::cout << "You shall be referred to from here on out as...Dobby!" << std::endl;
	std::cout << "Your GOAL, Dobby, is to reach the Leaky Cauldron to enjoy a mug of "
		"frothy butterbeer." << std::endl;
	std::cout << "Your journey will involve making some hard decisions," << std::endl;
	std::cout << "you'll collect some prized items in your backpack, and your "
		"knowledge will be tested..." << std::endl;
	std::cout << "Let's get started!" << std::endl;

	//create Player object
	Player* playerObject = new Player();

	//create Game object, pass Player object in
	Game* gameObject = new Game(playerObject);

	//deallocate dynamically allocated objects
	delete playerObject;
	delete gameObject;

	//delete before testing on flip
	//std::cin.ignore();
	//std::cin.get();
	return 0;

}
