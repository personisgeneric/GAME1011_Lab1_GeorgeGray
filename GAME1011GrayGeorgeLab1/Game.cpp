#include <iostream>
#include <string>
#include "Game.h"
#include "achievements.h"



void Game::initalizeAchievementList(int z) {
	achievementsArr = new Achievements[z];
	std::string placeholderName, placeholderDesc;
	
	for (int i = 0; i < z; i++) {
		int placeholderPoints;
		std::cout << "Please enter a Name, Description for the Achievement, and number of points for the achievements\nName: ";
		std::cin >> placeholderName;
		std::cout << "Description: ";
		std::cin >> placeholderDesc;
		std::cout << "Points: ";
		std::cin >> placeholderPoints;
		std::cout << "Got here\n";
		achievementsArr[i] = Achievements(placeholderName, placeholderDesc, placeholderPoints);
	}
}
void Game::addAchievement() {

}


