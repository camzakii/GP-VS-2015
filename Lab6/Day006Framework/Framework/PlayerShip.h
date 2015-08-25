<<<<<<< HEAD
// 717310 C++ SDL Framework
#ifndef __PLAYERSHIP__
#define __PLAYERSHIP__

=======
#ifndef __PLAYERSHIP__
#define __PLAYERSHIP__

#include "Entity.h"

>>>>>>> origin/master
// Forward Declarations:
class BackBuffer;
class Sprite;

<<<<<<< HEAD
#include "entity.h"

class PlayerShip
=======

class PlayerShip : public Entity
>>>>>>> origin/master
{
public:
	PlayerShip();
	~PlayerShip();

<<<<<<< HEAD

private:
	int x_pos;
	int y_pos;

};

#endif //__PLAYERSHIP__
=======
private:
	int pos_x;
	int pos_y;
};

#endif // __PLAYERSHIP__
>>>>>>> origin/master
