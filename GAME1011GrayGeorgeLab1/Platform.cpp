#include <iostream>
#include <string>
#include "Platform.h"
#include "Game.h"
std::string placeholderTitle, placeholderDeveloper, placeholderProducer;



void Platform::initalizeGameList(int y) {
	int numAchieve;
	gameArr = new Game[y];
	for (int i = 0; i < y; i++) {
		std::cout << "Please enter a Title, Developer, and Producer for the game you want to add.\nTitle: ";
		std::cin >> placeholderTitle;
		std::cout << "Developer: ";
		std::cin >> placeholderDeveloper;
		std::cout << "Producer: ";
		std::cin >> placeholderProducer;
		gameArr[i] = Game(placeholderTitle, placeholderDeveloper, placeholderProducer);
		std::cout << "How many Achievements would you like to make?\n";
		std::cin >> numAchieve;
		gameArr[i].initalizeAchievementList(numAchieve);
		
	}
}
void Platform::getGameArray(int x) {
	int game;
	
	std::cout << "Which game would you like to create achievements for?\n";
	for (unsigned int i = 0; i < x; i++) {
		std::cout << (i+1) << ". " << gameArr[i].getTitle() << ", developed by " << gameArr[i].getDev() << ", Produced by " << gameArr[i].getPub() << ".\n";
	}
	std::cin >> game;
	
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

void Platform::platSelect() {
	int select = 0;
	Game init;
	Platform nSwitch("Switch", "Nintendo");
	Platform Xbox("Xbox", "Microsoft");
	Platform PlaySt("Playstation 5", "Sony");
	std::cout << "1. " << nSwitch.getName() << ", Manufactured by " << nSwitch.getManu() << ".\n";
	std::cout << "2. " << Xbox.getName() << ", Manufactured by " << Xbox.getManu() << ".\n";
	std::cout << "3. " << PlaySt.getName() << ", Manufactured by " << PlaySt.getManu() << ".\n";
	std::cin >> select;
	int numGames;
	switch (select) {
	case 1: {
		std::cout << "How many games would you like to add?\n";
		std::cin >> numGames;
		nSwitch.initalizeGameList(numGames);
		nSwitch.getGameArray(numGames);
		/*init.gameSelect(nSwitch);*/
	}
	case 2: {
		/*init.gameSelect(Xbox);*/
	}
	case 3: {
		/*init.gameSelect(PlaySt);*/
	}
	}
}
//void Game::gameSelect(Platform p) {
//	Game DS("Dark Souls 3", "Bandi Namco", "FromSoftWare");
//	Game SF("Street Fighter 5", "Capcom", "Dimps");
//	Game CoD("Call of Duty: Cold War", "Activision", "Activision Blizzard");
//	Game RL("Rocket League", "Psyonix", "Panic Button Games");
//	Game FN("Fortnite", "Epic Games", "People Can Fly");
//	Game FG("Fall Guys", "Devolver Digital", "Mediatonic");
//}