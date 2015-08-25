#include <iostream>
#include <string>

using namespace std;

struct Player
{
	int xPos;
	int yPos;
	int health;
	bool alive;

};

void SetupPlayer(Player &player)
{
	player.xPos = 0;
	player.yPos = 0;
	player.health = 100;
	player.alive = true;
}

void PrintPlayerDetails(const Player& player)
{
	string isAlive = "";
	if (player.alive == 1)
	{
		isAlive += "Yes";
	}
	else
	{
		isAlive += "No";
	}
	cout << "Player's Current State" << endl;
	cout << "- Position: (" << player.xPos << ", " << player.yPos << ")" << endl;
	cout << "- Health: " << player.health << endl;
	cout << "- Alive: " << isAlive << endl;



}

void SetupPlayer2(Player& player, int xpos, int ypos, int health, bool alive)
{
	player.xPos = xpos;
	player.yPos = ypos;
	player.health = health;
	player.alive = alive;
}

int main()
{

	//testing reference
	Player player;
	Player player2;
	PrintPlayerDetails(player);
	PrintPlayerDetails(player2);
	SetupPlayer(player);
	SetupPlayer2(player2, 2, 3, 200, true);
	PrintPlayerDetails(player);
	PrintPlayerDetails(player2);
	_sleep(5000);
	return 0;
}