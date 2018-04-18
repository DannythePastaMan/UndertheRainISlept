#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <iostream>

using namespace sf;

int select = 0;
float sWidth = 1280, sHeight = 720;

Texture background_menu;
Font font_Menu;
Text text_Menu[4];
Event e;

int GetSelectedItem() {return select; }

void MoveUp() {
	if ((select - 1) >= 0) {
		text_Menu[select].setFillColor(Color::White);
		select--;
		text_Menu[select].setFillColor(Color::Color(255, 165, 0));
	}
}

void MoveDown() {
	if ((select + 1) <= 3) {
		text_Menu[select].setFillColor(Color::White);
		select++;
		text_Menu[select].setFillColor(Color::Color(255, 165, 0));
	}

}

void menu() {

	font_Menu.loadFromFile("C:/Users/dgome/Documents/Visual Studio 2017/Projects/UndertheRainISlept/Assets/04B_30__.ttf");

	if (!font_Menu.loadFromFile("C:/Users/dgome/Documents/Visual Studio 2017/Projects/UndertheRainISlept/Assets/04B_30__.ttf"))
	{
		std::cout << "Font cant be loaded" << std::endl;
	}
	
	background_menu.loadFromFile("C:/Users/dgome/Documents/Visual Studio 2017/Projects/UndertheRainISlept/Assets/Forest.png");

	Sprite BM(background_menu);

	RenderWindow window_menu(VideoMode(sWidth, sHeight), "Under the Rain I Slept");

	text_Menu[0].setFont(font_Menu);

	text_Menu[0].setString("Under the Rain\n\n   I Slept");
	FloatRect bounds = text_Menu[0].getLocalBounds();
	text_Menu[0].setPosition(bounds.width - 320, bounds.height - 50);
	text_Menu[0].setCharacterSize(48);
	text_Menu[0].setFillColor(Color::White);
	text_Menu[0].setOutlineColor(Color::Black);
	text_Menu[0].setOutlineThickness(10);

	text_Menu[1].setFont(font_Menu);

	text_Menu[1].setString("New Game");
	FloatRect bounds2 = text_Menu[1].getLocalBounds();
	text_Menu[1].setPosition(bounds2.width + 800, bounds2.height + 320);
	text_Menu[1].setCharacterSize(36);
	text_Menu[1].setFillColor(Color::Color(255, 165, 0));
	text_Menu[1].setOutlineColor(Color::Black);
	text_Menu[1].setOutlineThickness(10);

	text_Menu[2].setFont(font_Menu);

	text_Menu[2].setString("Continue");
	FloatRect bounds3 = text_Menu[2].getLocalBounds();
	text_Menu[2].setPosition(bounds3.width + 830, bounds3.height + 390);
	text_Menu[2].setCharacterSize(36);
	text_Menu[2].setFillColor(Color::White);
	text_Menu[2].setOutlineColor(Color::Black);
	text_Menu[2].setOutlineThickness(10);

	text_Menu[3].setFont(font_Menu);

	text_Menu[3].setString("Exit");
	FloatRect bounds4 = text_Menu[3].getLocalBounds();
	text_Menu[3].setPosition(bounds3.width + 880, bounds3.height + 460);
	text_Menu[3].setCharacterSize(36);
	text_Menu[3].setFillColor(Color::White);
	text_Menu[3].setOutlineColor(Color::Black);
	text_Menu[3].setOutlineThickness(10);

	while (window_menu.isOpen()) {
		while (window_menu.pollEvent(e)) {
			switch (e.type) {

			case Event::KeyReleased: {
				switch (e.key.code)
				{
				case Keyboard::Up: 
					MoveUp();
					break;
				
				case Keyboard::Down: 
					MoveDown();
					break;

				case Keyboard::Return:
					switch (GetSelectedItem()) {

					case 0:
						std::cout << "";
						break;

					case 1:
						
						break;

					case 2:
						std::cout << "Continue pressed";
						break;

					case 3:
						window_menu.close();
						break;
					}

				}
				break;
			}

			case Event::Closed: 
				window_menu.close();
				break;
		}

			/////Draw/////
			window_menu.clear();
			window_menu.draw(BM);
			window_menu.setVerticalSyncEnabled(true);
			window_menu.setFramerateLimit(60);
			for (int i = 0; i < 4; i++)
			{
				window_menu.draw(text_Menu[i]);
			}
			window_menu.display();
		}
	}
}

int main()
{
	menu();
	system("pause");
	return 0;
}