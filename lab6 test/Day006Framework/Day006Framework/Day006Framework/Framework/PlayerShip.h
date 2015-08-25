#ifndef __PLAYERSHIP_H__
#define __PLAYERSHIP_H__


#include "entity.h"

class PlayerShip : public Entity
{
private:


public:
	// Constructors and Destructors
	PlayerShip();
	~PlayerShip();

	void Process(float deltaTime);

};

#endif // __PLAYERSHIP_H__