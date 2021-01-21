#include <iostream>
#include <string>
#include "Game.h"
#include "achievements.h"
std::string placeholderName, placeholderDesc;
int placeholderPoints;

void Game::initalizeAchievementList(int x) {

	achievementsArr = new Achievements[x];
	
	for (int i = 0; i < x; i++) {
		std::cout << "Please enter a Name, Description for the Achievement, and number of points for the achievements\nName: ";
		std::cin >> placeholderName;
		std::cout << "Description: ";
		std::cin >> placeholderDesc;
		std::cout << "Points: ";
		std::cin >> placeholderPoints;
		achievementsArr[i] = Achievements(placeholderName, placeholderDesc, placeholderPoints);

	}
}
void Game::addAchievement() {

}


