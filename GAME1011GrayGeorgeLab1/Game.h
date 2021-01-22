#include "achievements.h"
#include <iostream>
#include <string>

class Game {
private:
	std::string m_title;
	std::string m_publisher;
	std::string m_developer;
	Achievements* m_pAchievementsArr;
	int m_numAchievements;
public:
	Game() {
		m_title = "";
		m_publisher = "";
		m_developer = "";
	}
	Game(std::string t, std::string p, std::string d) {
		m_title = t;
		m_publisher = p;
		m_developer = d;
	}
	~Game() {};
	std::string getTitle() {
		return m_title;
	}
	std::string getPub() {
		return m_publisher;
	}
	std::string getDev() {
		return m_developer;
	}
	/*void gameSelect(Platform p);*/
	//void addAchievement();
	void getAchievementArr();
	void initalizeAchievementList();
};
#pragma once

