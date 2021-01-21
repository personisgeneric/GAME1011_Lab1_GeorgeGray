#include "platform.h"
#include <string>
#include <iostream>
std::string placeholderConsole, placeholderManu;
Platform* platformArr;
void initalizePlatformList(int x) {
	platformArr = new Platform[x];
	int numGames;
	for (int i = 0; i < x; i++) {
		std::cout << "Please enter a Platform and Manufacturer.\nPlatform: ";
		std::cin >> placeholderConsole;
		std::cout << "\n Manufacturer: ";
		std::cin >> placeholderManu;
		platformArr[i] = Platform (placeholderConsole, placeholderManu);
		std::cout << "Please enter the number of games you want.\n";
		std::cin >> numGames;
		platformArr[i].initalizeGameList(numGames);
	}



}
void getPlatformArray(int x) {
	int platform;
	int numGames;
	std::cout << "Which Platform's Game library would you like to go to?\n";
	for (unsigned int i = 0; i < x; i++) {
		std::cout << (i + 1) << ". " << platformArr[i].getName() << ", manufactured by " << platformArr[i].getManu() << ".\n";
	}
	std::cin >> platform;

}

int main() {
	int numPlats;
	std::cout << "Welcome to the Achievement maker. How many Platforms would you like to add?\n";
	std::cin >> numPlats;
	initalizePlatformList(numPlats);
}