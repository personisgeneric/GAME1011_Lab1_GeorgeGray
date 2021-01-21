#include "platform.h"
#include "game.h"
#include "achievements.h"
#include <string>
#include <iostream>
std::string placeholderConsole, placeholderManu;
Platform* platformArr;
int numPlatforms;
void initalizePlatformList(int x) {
	platformArr = new Platform[x];
	int numGames;
	for ( int i = 0; i < x; i++) {
		std::cout << "Please enter a Platform and Manufacturer.\nPlatform: ";
		std::cin >> placeholderConsole;
		std::cout << "\n Manufacturer: ";
		std::cin >> placeholderManu;
		platformArr[i] = Platform (placeholderConsole, placeholderManu);
		std::cout << "Please enter the number of games you want.\n";
		std::cin >> numGames;
		platformArr[i].initalizeGameList(numGames);
	}
	numPlatforms = x;
}
void getPlatformArray(){
	for (unsigned int i = 0; i < numPlatforms; i++) {
		std::cout << "Platform: " << platformArr[i].getName() << ", manufactured by " << platformArr[i].getManu() << ".\n";
		platformArr[i].getGameArray();
	}


}

int main() {
	int numPlats;
	std::cout << "Welcome to the Achievement maker. How many Platforms would you like to add?\n";
	std::cin >> numPlats;
	initalizePlatformList(numPlats);
	getPlatformArray();
	return 0;
}