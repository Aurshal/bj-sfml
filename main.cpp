#include "game.h"


sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "BlackJack", sf::Style::Default);

Game g;

void updateInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.key.code == sf::Keyboard::Escape ||
            event.type == sf::Event::Closed) {
            window.close();
        }
    }
    return;
}
void update() {
    return;
}

void draw() {
    window.draw(g.hitSprite);
    window.draw(g.bidSprite);
    window.draw(g.standSprite);
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
        sf::Time dt = clock.restart();
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