#ifndef _ACHIEVEMENTS_H_
#define _ACHIEVEMNT_H_
#include <string>
#include <iostream>


class Platform {
private:
	std::string name;
	std::string manufacturer;
	int game;
public:
	Platform(std::string n, std::string m, int x) {
		name = n;
		manufacturer = m;
		game = x;
	}
	std::string getName() {
		return name;
	}
	std::string getManufactur() {
		return manufacturer;
	}
};

class Game {
private:
	std::string title;
	std::string publisher;
	std::string developer;
	int Plat;
public:
	Game(std::string t, std::string p, std::string d, int x) {
		title = t;
		publisher = p;
		developer = d;
		Plat = x;
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
	int getPlat() {
		return Plat;
	}
};
class Achievements {
private:

public:
};




#endif 
#pragma once
