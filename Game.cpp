/*************************************************************************
** Program name: Game.cpp
** Author: Ashley Fong
** Date: August 9, 2017
** Description: This is the implementation file for the Game class.
** This class creates the necessary Space objects, sets the directional
** pointers and places the player in the Grand Hall to start the game.
*************************************************************************/
#include "Game.hpp"

//constructor
Game::Game(Player* p1) {

	this->p1 = p1;

	//create Space objects
	GreatHall greatHallObject = GreatHall(p1);
	DivinationTower divinationTowerObject = DivinationTower(p1);
	Hospital hospitalObject = Hospital(p1);
	GryffindorTower gryffindorTowerObject = GryffindorTower(p1);
	DarkTower darkTowerObject = DarkTower(p1);
	QuidditchField quidditchFieldObject = QuidditchField(p1);
	LeakyCauldron leakyCauldronObject = LeakyCauldron(p1);

	//set directional pointers
	greatHallObject.setLeft(&hospitalObject);
	greatHallObject.setTop(&divinationTowerObject);

	divinationTowerObject.setBottom(&greatHallObject);
	divinationTowerObject.setTop(&gryffindorTowerObject);

	hospitalObject.setRight(&greatHallObject);

	gryffindorTowerObject.setBottom(&divinationTowerObject);
	gryffindorTowerObject.setLeft(&darkTowerObject);
	gryffindorTowerObject.setTop(&leakyCauldronObject);

	darkTowerObject.setRight(&gryffindorTowerObject);
	darkTowerObject.setTop(&quidditchFieldObject);

	quidditchFieldObject.setBottom(&darkTowerObject);
	quidditchFieldObject.setRight(&leakyCauldronObject);

	leakyCauldronObject.setLeft(&quidditchFieldObject);
	leakyCauldronObject.setBottom(&gryffindorTowerObject);

	//start game
	greatHallObject.move();
}

//destructor
Game::~Game() {

}