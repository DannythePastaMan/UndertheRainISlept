#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>

class NewGame
{
public:
	std::string player;
	std::string str;
	float sWidth = 1280, sHeight = 720;

	void DrawWindow();
	
	NewGame();
	~NewGame();
};

