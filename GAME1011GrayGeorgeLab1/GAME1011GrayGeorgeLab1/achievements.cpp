#include <iostream>
#include "achievements.h"
#include <string>
#include <fstream>

void Platform::addGame(Game*) {

}
void  Platform::addGameList() {

}

void initClasses() {
	Game DS(std::string DarkSouls, std::string BANDINAMCO, std::string FromSoftWare);
	Game SF(std::string StreetFighter5, std::string CapCom, std::string Dimps);
	Game CoD(std::string CallOfDuty, std::string Activision, std::string ActivisionBlizzard);
	Game RL(std::string RocketLeague, std::string Psyonix, std::string PanicButtonGames);
	Game FN(std::string Fortnite, std::string EpicGames, std::string PeopleCanFly);
	Game FG(std::string FallGuys, std::string DevolverDigital, std::string Mediatonic);
	Platform nSwitch(std::string Switch, std::string Nintendo, Game*);
	Platform Xbox(std::string Xbox, std::string Microsoft);
	Platform Playstation(std::string PS5, std::string Sony);
}