#include "achievements.h"
#include <iostream>
#include <string>

class Game {
private:
	std::string title;
	std::string publisher;
	std::string developer;
	Achievements* achievementsArr;
public:
	Game() {
		title = "";
		publisher = "";
		developer = "";
	}
	Game(std::string t, std::string p, std::string d) {
		title = t;
		publisher = p;
		developer = d;
	}
	std::string getTitle() {
		return title;
	}
	std::string getPub() {
		return publisher;
	}
	std::string getDev() {
		return developer;
	}
	/*void gameSelect(Platform p);
	void addAchievement(Achievements* arr);
	void initalizeAchievementList(int x);*/
};
#pragma once

