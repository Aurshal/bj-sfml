#pragma once

#include "cards.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Player : public Cards {

protected:
    int bid;

    vector <int> playerCards;
    bool b_playerWin = false;
    bool b_playerHit = false;

public:
    void init();
    void setCards();
    void showCards();
    int calcCards();
    void onHit();
    void onStand();
};