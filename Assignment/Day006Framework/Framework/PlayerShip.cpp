
#include "PlayerShip.h"

PlayerShip::PlayerShip()
	: Entity()
{    // Call the constructor of the super class
	// Construct the player ship
	
}

PlayerShip::~PlayerShip()
{

}

void 
PlayerShip::Process(float deltaTime)
{
	// Process the PlayerShip object
	Entity::Process(deltaTime);
}
