program: finalProjectMain.o Space.o GreatHall.o Hospital.o DivinationTower.o GryffindorTower.o DarkTower.o QuidditchField.o LeakyCauldron.o Player.o Game.o Menu.o validateInteger.o
	g++ finalProjectMain.o Space.o GreatHall.o Hospital.o DivinationTower.o GryffindorTower.o DarkTower.o QuidditchField.o LeakyCauldron.o Player.o Game.o Menu.o validateInteger.o -o program

finalProjectMain.o: finalProjectMain.cpp
	g++ -c finalProjectMain.cpp

Space.o: Space.cpp Space.hpp
	g++ -c Space.cpp

GreatHall.o: GreatHall.cpp GreatHall.hpp
	g++ -c GreatHall.cpp

Hospital.o: Hospital.cpp Hospital.hpp
	g++ -c Hospital.cpp

DivinationTower.o: DivinationTower.cpp DivinationTower.hpp
	g++ -c DivinationTower.cpp

GryffindorTower.o: GryffindorTower.cpp GryffindorTower.hpp
	g++ -c GryffindorTower.cpp

DarkTower.o: DarkTower.cpp DarkTower.hpp
	g++ -c DarkTower.cpp

QuidditchField.o: QuidditchField.cpp QuidditchField.hpp
	g++ -c QuidditchField.cpp

LeakyCauldron.o: LeakyCauldron.cpp LeakyCauldron.hpp
	g++ -c LeakyCauldron.cpp

Player.o: Player.cpp Player.hpp
	g++ -c Player.cpp

Game.o: Game.cpp Game.hpp
	g++ -c Game.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -c Menu.cpp

validateInteger.o: validateInteger.cpp validateInteger.hpp
	g++ -c validateInteger.cpp

clean:
	rm *.o program
