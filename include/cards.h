#pragma once

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
using namespace std;
#include <cstdlib> 
#include <ctime>

class Cards {
protected:
    int cards[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
    sf::Texture cardTexture;
    sf::Sprite cardSprite;
public:
    int genRanIndex(int n);
    sf::Sprite genCards(int n);

};


