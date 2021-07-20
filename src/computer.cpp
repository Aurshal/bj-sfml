#include "computer.h"

void Computer::init() {

    computerTexture.loadFromFile("./assets/layout/Dealer.png");
    computerTexture.setSmooth(true);

    computerSprite.setTexture(computerTexture);
    computerSprite.setOrigin(computerTexture.getSize().x / 2, computerTexture.getSize().y / 2);
    computerSprite.setPosition(sf::Vector2f(1024.f - 200.f, 50.f));
    setCards();
}

void Computer::setCards() {
    computerCards.clear();
    for (int i = 0; i < 2; i++) {
        cout << i << endl;
        sf::Sprite temp = genCards(i + 7);
        computerCards.push_back(temp);
    }

}

// void Computer::showCards(bool hidden) {
//     // cout << "\nCard size: " << computerCards.size() << endl;
//     cout << "\nDealer's card: ";
//     for (unsigned i = 0; i < computerCards.size(); i++) {
//         if (i != 1 && hidden == true)
//             cout << " * ";
//         else
//             cout << computerCards.at(i) << " ";
//     }
// }

// int Computer::calcCards() {
//     int sum{ 0 };
//     for (auto card : computerCards) {
//         sum += card;
//     }
//     return sum;
// }

// void Computer::onHit() {
//     int prevTot = Computer::calcCards();
//     sf::Sprite newCard = genCards(1);
//     // if ((newCard == 11) && (prevTot + newCard) > 21) {
//     //     newCard = 1;
//     // }
//     computerCards.push_back(newCard);
// }