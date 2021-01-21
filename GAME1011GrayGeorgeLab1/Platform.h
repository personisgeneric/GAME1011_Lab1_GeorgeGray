#include "game.h"
#include <iostream>
#include <string>
class Platform {
private:
	std::string name;
	std::string manufacturer;
	Game* gameArr;
	int numGames;
public:
	Platform() {
		name = "";
		manufacturer = "";
	}
	Platform(std::string n, std::string m) {
		name = n;
		manufacturer = m;
	}
	std::string getName() {
		return name;
	}
	std::string getManu() {
		return manufacturer;
	}
	void getGameArray();
	//void gameSelect();
	//void platSelect();
	void initalizeGameList(int y);
};

#pragma once

