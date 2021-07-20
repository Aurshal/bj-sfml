#pragma once

#include "cards.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
class Computer : public Cards {
protected:


public:
    vector <sf::Sprite> computerCards;

    sf::Texture computerTexture;
    sf::Sprite computerSprite;
    void init();
    void setCards();
    void showCards(bool hidden = true);
    int calcCards();
    void onHit();

};