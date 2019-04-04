/*************************************************************************
** Program name: validateInteger.cpp
** Author: Ashley Fong
** Date: July 29, 2017
** Description: This is the implementation file for the validateInteger
** function.
*************************************************************************/
#include "validateInteger.hpp"

//citation: https://www.youtube.com/watch?v=gzzXVX6s4w8
bool validateInteger(int input, int min, int max) {

	bool validInt = true;

	if (std::cin.fail() || input < min || input > max) {
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "Invalid input. Please try again."
			<< std::endl;
		validInt = false;
	}

	return validInt;
}