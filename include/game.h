#pragma once
#include <iomanip>
#include <cstdlib>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>



#include "computer.h"
#include "player.h"
#include "art.h"
#include "rules.h"


class Game :public Player, public Computer, public Art, public Rules {
    string hitOrStand;
public:
    int money{ 1000 };
    int bid{ 0 };
    int gameCount{ 0 };
    sf::Texture hitTexture;

    sf::Texture standTexture;

    sf::Texture bidTexture;

    sf::Texture c25Texture;

    sf::Texture c50Texture;

    sf::Texture c100Texture;

    sf::Texture c200Texture;

    sf::Sprite hitSprite;

    sf::Sprite standSprite;

    sf::Sprite bidSprite;

    sf::Sprite c25Sprite;

    sf::Sprite c50Sprite;

    sf::Sprite c100Sprite;

    sf::Sprite c200Sprite;

    sf::Font defaultFont;
    sf::Text menuText;

    sf::Text headingText;



public:
    void menu();
    void init();
    void play();
    void playAgain();
    void chooseWinner();
    void resultMenu();
    void hitOrStandMenu();
};


