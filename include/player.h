#pragma once

#include "cards.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Player : public Cards {

protected:
    int bid;


public:
    vector <sf::Sprite> playerCards;

    sf::Texture playerTexture;
    sf::Sprite playerSprite;
    sf::Texture pcardsTexture;
    sf::Sprite pcardsSprite;
    void init();
    void setCards();
    void showCards();
    int calcCards();
    void onHit();
    void onStand();
};