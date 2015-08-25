#include "Player.h"

#include <iostream>

int main()
{
	//Create player and print stats
	Player player;
	player.printStats();

	player.setExperience(50);
	player.setHealth(200);
	player.setRageLevel(100);

	std::cout << "The new settings for player: " << std::endl;
	std::cout << "Experience: " << player.getExperience() << std::endl;
	std::cout << "Health: " << player.getHealth() << std::endl;
	std::cout << "Rage Level: " << player.getRageLevel() << std::endl << std::endl;

	player.printStats();
	_sleep(5000);

	return(0);
}