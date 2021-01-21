#include <iostream>
#include <string>
class Achievements {
private:
	std::string name;
	std::string description;
	int points;
public:
	Achievements() {
		name = "";
		description = "";
		points = 0;
	}
	Achievements(std::string n, std::string d, int p) {
		name = n;
		description = d;
		points = p;
	}
	std::string getName() {
		return name;
	}
	std::string getDesc() {
		return description;
	}
	int getPoints() {
		return points;
	}
	void setPoints(int p) {
		points = p;
	}
	void setName(std::string n) {
		name = n;
	}
	void setDesc(std::string d) {
		description = d;
	}

};

#pragma once