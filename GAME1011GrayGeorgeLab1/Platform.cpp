#include <iostream>
#include <string>
#include "Platform.h"
#include "Game.h"
std::string placeholderTitle, placeholderDeveloper, placeholderProducer;



void Platform::initalizeGameList(int y) 
{
	gameArr = new Game[y];
	for ( int i = 0; i < y; i++) 
	{
		std::cout << "Please enter a Title, Developer, and Producer for the game you want to add.\nTitle: ";
		std::cin >> placeholderTitle;
		std::cout << "Developer: ";
		std::cin >> placeholderDeveloper;
		std::cout << "Producer: ";
		std::cin >> placeholderProducer;
		gameArr[i] = Game(placeholderTitle, placeholderDeveloper, placeholderProducer);
		
		gameArr[i].initalizeAchievementList();
	}
	numGames = y;
}
void Platform::getGameArray() 
{
	for (unsigned int i = 0; i < numGames; i++) 
	{
		std::cout << "Game: " << gameArr[i].getTitle() << ", developed by " << gameArr[i].getDev() << ", Produced by " << gameArr[i].getPub() << ".\n";
		gameArr[i].getAchievementArr();
	}
	
}
//void Platform::gameSelect() {
//	this->gameArr;
//}
//void Platform::addGame(int s, Game g) {
//	for (unsigned int i = 0; i < s; i++) {
//		
//
//	}
//}

