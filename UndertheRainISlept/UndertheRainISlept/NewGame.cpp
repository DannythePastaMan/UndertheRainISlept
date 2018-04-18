#include "NewGame.h"
#include <iostream>
#include <SFML\Graphics.hpp>

using namespace sf;

NewGame::NewGame()
{
}


NewGame::~NewGame()
{
}

void NewGame::DrawWindow() {
	Font f;
	Texture t;
	Event e;
	Sprite s(t);

	f.loadFromFile("C:/Users/dgome/Documents/Visual Studio 2017/Projects/UndertheRainISlept/Assets/04B_30__.ttf");
	t.loadFromFile("C:/Users/dgome/Documents/Visual Studio 2017/Projects/UndertheRainISlept/Assets/Alone_Together_Background_5.png");

	RenderWindow rw(VideoMode(1280, 720), "Under the Rain I Slept");
	
}

