#include "main.h"
void updateInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.key.code == sf::Keyboard::Escape ||
            event.type == sf::Event::Closed) {
            window.close();
        }

        if (event.type == sf::Event::MouseButtonPressed) {
            if (event.mouseButton.button == sf::Mouse::Left) {

                //HIT BUTTON 
                if ((((sf::Mouse::getPosition(window)).x >= g.hitSprite.getPosition().x - g.hitSprite.getLocalBounds().width / 2.f) && ((sf::Mouse::getPosition(window)).x <= g.hitSprite.getPosition().x + g.hitSprite.getLocalBounds().width / 2.f)) && (((sf::Mouse::getPosition(window)).y >= g.hitSprite.getPosition().y - g.hitSprite.getLocalBounds().height / 2.f) && ((sf::Mouse::getPosition(window)).y <= g.hitSprite.getPosition().y + g.hitSprite.getLocalBounds().height / 2.f)))
                {
                    std::cout << "Hit button pressed" << std::endl;
                }

                //STAND BUTTON
                if ((((sf::Mouse::getPosition(window)).x >= g.standSprite.getPosition().x - g.standSprite.getLocalBounds().width / 2.f) && ((sf::Mouse::getPosition(window)).x <= g.standSprite.getPosition().x + g.standSprite.getLocalBounds().width / 2.f)) && (((sf::Mouse::getPosition(window)).y >= g.standSprite.getPosition().y - g.standSprite.getLocalBounds().height / 2.f) && ((sf::Mouse::getPosition(window)).y <= g.standSprite.getPosition().y + g.standSprite.getLocalBounds().height / 2.f)))
                {
                    std::cout << "Stand Button pressed" << std::endl;
                }

                //BID BUTTON
                if ((((sf::Mouse::getPosition(window)).x >= g.bidSprite.getPosition().x - g.bidSprite.getLocalBounds().width / 2.f) && ((sf::Mouse::getPosition(window)).x <= g.bidSprite.getPosition().x + g.bidSprite.getLocalBounds().width / 2.f)) && (((sf::Mouse::getPosition(window)).y >= g.bidSprite.getPosition().y - g.bidSprite.getLocalBounds().height / 2.f) && ((sf::Mouse::getPosition(window)).y <= g.bidSprite.getPosition().y + g.bidSprite.getLocalBounds().height / 2.f)))
                {
                    std::cout << "Bid Button pressed" << std::endl;
                    doBid = true;
                }

                //PLAY BUTTON
                if ((((sf::Mouse::getPosition(window)).x >= g.playText.getPosition().x - g.playText.getLocalBounds().width / 2.f) && ((sf::Mouse::getPosition(window)).x <= g.playText.getPosition().x + g.playText.getLocalBounds().width / 2.f)) && (((sf::Mouse::getPosition(window)).y >= g.playText.getPosition().y - g.playText.getLocalBounds().height / 2.f) && ((sf::Mouse::getPosition(window)).y <= g.playText.getPosition().y + g.playText.getLocalBounds().height / 2.f)))
                {
                    play = true;
                    std::cout << "Play Button pressed" << std::endl;

                }

                //RULES BUTTON
                if ((((sf::Mouse::getPosition(window)).x >= g.rulesHeading.getPosition().x - g.rulesHeading.getLocalBounds().width / 2.f) && ((sf::Mouse::getPosition(window)).x <= g.rulesHeading.getPosition().x + g.rulesHeading.getLocalBounds().width / 2.f)) && (((sf::Mouse::getPosition(window)).y >= g.rulesHeading.getPosition().y - g.rulesHeading.getLocalBounds().height / 2.f) && ((sf::Mouse::getPosition(window)).y <= g.rulesHeading.getPosition().y + g.rulesHeading.getLocalBounds().height / 2.f)))
                {
                    showRules = true;
                    std::cout << "Rules Button pressed" << std::endl;

                }
            }
        }
    }
}

void draw() {
    window.draw(g.menuHeading);
    window.draw(g.playText);
    window.draw(g.rulesHeading);
    if (showRules) {
        window.clear(sf::Color::Cyan);
        window.draw(g.rules);

    }
    if (play) {
        window.clear(sf::Color::Cyan);
        window.draw(g.Player::playerSprite);
        window.draw(g.Computer::computerSprite);
        window.draw(g.bidSprite);
        if (doBid) {
            window.draw(g.c25Sprite);
            window.draw(g.c50Sprite);
            window.draw(g.c100Sprite);
            window.draw(g.c200Sprite);
        }

        // window.clear(sf::Color::Cyan);
        window.draw(g.hitSprite);
        window.draw(g.standSprite);
    }


    return;
}
int main() {
    // Game g;
    // g.art();
    // g.menu();
    sf::Clock clock;
    g.init();
    //init game objects
    while (window.isOpen())
    {
        //handle keyboard events
        updateInput();
        //update game objects in the scene
        // sf::Time dt = clock.restart();
        // if (!gameover) {
        //     update(dt.asSeconds());
        // }


        //draw game here
        window.clear(sf::Color::Cyan);
        //render game objects
        draw();
        // if (gameover)
        //     window.draw(headingText);
        // else
        //     window.draw(scoreText);
        // //show everything we just drew
        window.display();
    }
    return 0;
}