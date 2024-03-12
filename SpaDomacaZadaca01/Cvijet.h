#pragma once
#include <SFML/Graphics.hpp>
class Cvijet
{

public:
    Cvijet(sf::RenderWindow* window);



    void draw();





private:
    sf::RenderWindow* window;
    void  drawStem();
    void  drawPetal();
    void  drawSun();
    void drawCenter();


};