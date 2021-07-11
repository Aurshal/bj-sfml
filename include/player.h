#pragma once

#include "cards.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Player : public Cards {

protected:
    int bid;

    vector <int> playerCards;

public:
    sf::Texture playerTexture;
    sf::Sprite playerSprite;
    void init();
    void setCards();
    void showCards();
    int calcCards();
    void onHit();
    void onStand();
};