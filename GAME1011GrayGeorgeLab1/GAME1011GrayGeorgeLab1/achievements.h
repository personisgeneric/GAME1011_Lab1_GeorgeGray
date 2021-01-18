#ifndef _ACHIEVEMENTS_H_
#define _ACHIEVEMNT_H_
#include <string>
#include <iostream>

class Achievements {
private:
	std::string name;
	std::string description;
	int points;
public:
	std::string getName() {
		return name;
	}
	std::string getDesc() {
		return description;
	}
	int getPoints() {
		return points;
	}

};

class Game {
private:
	std::string title;
	std::string publisher;
	std::string developer;
	Achievements* achievementsArr[];
public:
	Game(std::string t, std::string p, std::string d, int x) {
		title = t;
		publisher = p;
		developer = d;
	}
	std::string getTitle(){
		return title;
	}
	std::string getPub() {
		return publisher;
	}
	std::string getDev() {
		return developer;
	}
};

class Platform {
private:
	std::string name;
	std::string manufacturer;
	Game* gameArr;
public:
	Platform(std::string n, std::string m) {
		name = n;
		manufacturer = m;
	}
	std::string getName() {
		return name;
	}
	std::string getManufactur() {
		return manufacturer;
	}
	void addGame(Game*);
	void addGameList(Game* []);
};





#endif 
#pragma once
