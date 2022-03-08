#include<iostream>
#include<vector>
#include<SFML/graphics.hpp>
using namespace std;

vector<pair<double, double> > bullet;
int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 600), "GAME_3");

	sf::Texture backgroundtexture;
	if (!backgroundtexture.loadFromFile("background.png"))
	{
		cout << "Background loading error!\n";
	}
	sf::Sprite backgroundsprite(backgroundtexture);

	sf::Texture maintexture;
	if (!maintexture.loadFromFile("main.png"))
	{
		cout << "main loadin error!\n";
	}
	sf::Sprite mainsprite(maintexture);
	mainsprite.setPosition(sf::Vector2f(460, 480));

	sf::Texture bullettexture;
	if (!bullettexture.loadFromFile("bullet.png"))
	{
		cout << "bullet loading error!\n";
	}
	sf::Sprite bulletsprite(bullettexture);


		while(window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					window.close();
				}
				if (event.type == sf::Event::MouseButtonReleased && event.key.code == sf::Mouse::Left) {
					cout << "Mouse button has been released.\n";
					bullet.push_back(make_pair(mainsprite.getPosition().x, mainsprite.getPosition().y));
				}

			}


			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
				cout << "A has been pressed.\n";
				if (mainsprite.getPosition().x >= -25) {
					mainsprite.move(sf::Vector2f(-1, 0));
				}


			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				cout << "D has been pressed.\n";
				if (mainsprite.getPosition().x <=920) {
					mainsprite.move(sf::Vector2f(1, 0));
				}


			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
				cout << "W has been pressed.\n";
				if (mainsprite.getPosition().y >=0) {
					mainsprite.move(sf::Vector2f(0, -1));
				}


			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
				cout << "S has been pressed.\n";
				if (mainsprite.getPosition().y<= 490) {
					mainsprite.move(sf::Vector2f(0, 1));
				}


			}


			window.clear();

			window.draw(backgroundsprite);
			window.draw(mainsprite);

			if (!bullet.empty()) {

				for (int i = 0; i < bullet.size(); i++) {
					bullet[i].second -= 2;
					if (bullet[i].second <= -10) {
						continue;
					}
					bulletsprite.setPosition(sf::Vector2f(bullet[i].first, bullet[i].second));
					bulletsprite.move(sf::Vector2f(0, -2));

					window.draw(bulletsprite);
				}
			}

			window.display();
		}


	return 0;
}
