#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;
class cScreen
{
public:
	virtual int Run(RenderWindow &APP) = 0;
	cScreen();
	~cScreen();
};

