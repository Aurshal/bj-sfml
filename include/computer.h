#pragma once

#include "cards.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
class Computer : public Cards {
protected:
    vector <int> computerCards;
    bool b_computerWin = false;
    bool b_computerHit = false;

public:
    void init();
    void setCards();
    void showCards(bool hidden = true);
    int calcCards();
    void onHit();

};