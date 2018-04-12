#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

void menu() {
	RenderWindow window_menu(VideoMode(1280, 720), "Under the Rain I Slept");

	Texture background_menu;
	Font font_Menu;
	Text text_Menu;


	font_Menu.loadFromFile("C:/Users/dgome/Documents/Visual Studio 2017/Projects/UndertheRainISlept/Assets/04B_30__.ttf");
	
	if (!font_Menu.loadFromFile("C:/Users/dgome/Documents/Visual Studio 2017/Projects/UndertheRainISlept/Assets/04B_30__.ttf"))
	{
		std::cout << "Font cant be loaded" << std::endl;
	}

	background_menu.loadFromFile("C:/Users/dgome/Documents/Visual Studio 2017/Projects/UndertheRainISlept/Assets/FutureCity.jpg");

	text_Menu.setFont(font_Menu);
	text_Menu.setString("Under the Rain\n   I Slept");
	text_Menu.setCharacterSize(48);
	text_Menu.setFillColor(Color::White);

	Sprite BM(background_menu);
	
	while (window_menu.isOpen()) {
		Event e;
		while (window_menu.pollEvent(e)) {
			if (e.type == Event::Closed) {
				window_menu.close();
			}
		}

		/////Draw/////
		window_menu.clear();
		window_menu.draw(BM);
		window_menu.draw(text_Menu);
		window_menu.display();
	}
}

int main()
{
	menu();
	system("pause");
	return 0;
}