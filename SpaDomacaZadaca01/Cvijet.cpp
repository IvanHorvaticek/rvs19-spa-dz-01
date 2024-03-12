#include "Cvijet.h"



Cvijet::Cvijet(sf::RenderWindow* window) : window(window) {

}

void Cvijet::draw() {
    drawStem();
    drawPetal();
    drawSun();
    drawCenter();
}

void Cvijet::drawStem() {
    sf::RectangleShape stem(sf::Vector2f(10.0f, 100.0f));
    stem.setPosition(387.0f, 280.0f);
    stem.setFillColor(sf::Color::Green);
    window->draw(stem);
}

void Cvijet::drawPetal() {
    sf::CircleShape petal(40.0f);
    petal.setPosition(350.0f, 200.0f);
    petal.setFillColor(sf::Color::Red);
    window->draw(petal);
}
void Cvijet::drawSun() {
    sf::CircleShape sun(15.0f);
    sun.setPosition(20.0f, 30.0f);
    sun.setFillColor(sf::Color::Yellow);
    window->draw(sun);

}


void Cvijet::drawCenter() {
    sf::CircleShape center(15.0f);
    center.setPosition(380.0f, 227.0f);
    center.setFillColor(sf::Color::Yellow);
    window->draw(center);
}
