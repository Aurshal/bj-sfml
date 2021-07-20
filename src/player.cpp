#include "player.h"


void Player::init() {

    playerTexture.loadFromFile("./assets/layout/Player.png");
    playerTexture.setSmooth(true);
    playerSprite.setTexture(playerTexture);

    playerSprite.setOrigin(playerTexture.getSize().x / 2, playerTexture.getSize().y / 2);
    playerSprite.setPosition(sf::Vector2f(200.f, 50.f));

    playerSprite.setOrigin(playerTexture.getSize().x / 2, playerTexture.getSize().y / 2);
    playerSprite.setPosition(sf::Vector2f(200.f, 50.f));
    setCards();
}

void Player::setCards() {
    playerCards.clear();
    for (int i = 0; i < 2; i++) {
        playerCards.push_back(genCards(i + 5));
    }
}

// void Player::showCards() {
//     // cout << "\nCard size: " << playerCards.size() << endl;
//     cout << "\nYour's cards: ";
//     for (auto card : playerCards) {

//         window.draw(card);
//     }
// }

// int Player::calcCards() {
//     int sum{ 0 };
//     for (auto card : playerCards) {
//         sum += card;
//     }
//     return sum;
// }

// void Player::onHit() {
//     int prevTot = Player::calcCards();
//     sf::Sprite newCard = genCards(1);
//     // if ((newCard == 11) && (prevTot + newCard) > 21) {
//     //     newCard = 1;
//     // }
//     playerCards.push_back(newCard);
// }