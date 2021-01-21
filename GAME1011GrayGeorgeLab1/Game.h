#include "achievements.h"
#include <iostream>
#include <string>

class Game {
private:
	std::string title;
	std::string publisher;
	std::string developer;
	Achievements* achievementsArr;
	int numAchievements;
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
	~Game() {};
	std::string getTitle() {
		return title;
	}
	std::string getPub() {
		return publisher;
	}
	std::string getDev() {
		return developer;
	}
	/*void gameSelect(Platform p);*/
	//void addAchievement();
	void getAchievementArr();
	void initalizeAchievementList();
};
#pragma once

