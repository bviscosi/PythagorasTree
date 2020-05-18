//Created by Ben Viscosi - 9/23/19

#include "PTree.hpp"
#include <iostream>
#include <math.h>

int main(int argc, char const* argv[])
{

    double A = atoi(argv[3]);
    double L = atoi(argv[1]);
    int D = atoi(argv[2]);


    sf::RenderWindow w(sf::VideoMode(6*L, 4*L), "SFML window");

    PTree ptree(L, D, A);

    while (w.isOpen() )
    {
        sf::Event event;
        while (w.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                w.close();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                w.close();
            }
            w.draw(ptree);
            w.display();
        }
    }

    return 0;
}
