/*************************************************************************
** Program name: Game.hpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the header file for the Game class.
*************************************************************************/
#include "Space.hpp"
#include "GreatHall.hpp"
#include "DivinationTower.hpp"
#include "Hospital.hpp"
#include "GryffindorTower.hpp"
#include "DarkTower.hpp"
#include "QuidditchField.hpp"
#include "LeakyCauldron.hpp"
#include "Player.hpp"

#ifndef GAME_HPP
#define GAME_HPP

class Game {

protected:
	Player* p1;

public:
	//constructor
	Game(Player*);

	//destructor
	~Game();

};

#endif // !GAME_HPP
