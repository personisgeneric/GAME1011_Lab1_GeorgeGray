#include <iostream>
#include <string>
#include "Game.h"
#include "achievements.h"
std::string placeholderName, placeholderDesc;
int placeholderPoints;
int numAchieve;
void Game::initalizeAchievementList() {
	
	std::cout << "How many Achievements would you like to make?\n";
	std::cin >> numAchieve;
	achievementsArr = new Achievements[numAchieve];
	for (unsigned int i = 0; i < numAchieve; i++) {
		
		std::cout << "Please enter a Name, Description for the Achievement, and number of points for the achievements\nName: ";
		std::cin >> placeholderName;
		std::cout << "Description: ";
		std::cin >> placeholderDesc;
		std::cout << "Points: ";
		std::cin >> placeholderPoints;
		achievementsArr[i] = Achievements(placeholderName, placeholderDesc, placeholderPoints);
	}
	numAchievements = numAchieve;
}
void Game::getAchievementArr() {
	for (unsigned int j = 0; j < numAchievements; j++) {
		std::cout << "Achievement: " << achievementsArr[j].getName() << ", achieved by " << achievementsArr[j].getDesc() << ", worth " << achievementsArr[j].getPoints() << " points.\n";
	
	}
}



