/*************************************************************************
** Program name: Player.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the Player class.
*************************************************************************/
#include <iostream>
#include <vector>
#include <string>

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {

protected:
	std::vector<std::string> backpack;
	int strengthPoints;

public:
	Player();
	~Player();
	void putInBackpack(std::string);
	void printBackpack();
	bool checkGoldenSnitch();
	bool checkStrengthPoints();

	//strength points - to limit to number of moves
	int getStrengthPoints();
	int setStrengthPoints(int);

};

#endif // !PLAYER_HPP
