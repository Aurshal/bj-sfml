#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "game.h"
Game g;
sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "BlackJack", sf::Style::Default);

int count = 0;

bool doBid = false;
bool play = false;
bool showRules = false;
bool coinClick = false;