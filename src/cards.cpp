#include <iostream>
#include <vector>
#include "cards.h"

using namespace std;

int Cards::genRanIndex(int n = 1) {
    int ranIndex;
    srand(static_cast<unsigned int>(std::time(nullptr)) * n);
    ranIndex = ((rand() % 13) + 1);
    // cout << "Random index: " << ranIndex << endl;
    return ranIndex;
}

sf::Sprite Cards::genCards(int n = 1) {
    int cardno = genRanIndex(n);
    cout << "Card no: " << cardno << endl;
    sf::String c = "./assets/cards/p" + std::to_string(cardno);
    sf::String ci = c + ".png";
    cout << (std::string)(ci) << endl;
    cardTexture.loadFromFile(ci);
    cardSprite.setTexture(cardTexture);
    cardSprite.setOrigin(cardTexture.getSize().x / 2, cardTexture.getSize().y / 2);
    cardSprite.setPosition(sf::Vector2f(180.f, 280.f));
    return cardSprite;
}

