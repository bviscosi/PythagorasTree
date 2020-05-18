//
//  PTree.hpp
//  PS2
//
//  Created by Ben on 9/23/19.
//  Copyright © 2019 Ben. All rights reserved.
//

#ifndef PTree_hpp
#define PTree_hpp
#define PI 3.14159265358979323846
#include <iostream>
#include <SFML/Graphics.hpp>

class PTree : public sf::Drawable{
    
public:

    PTree(double L, int N, double A);
    void pTree(sf::RenderTarget& target, sf::ConvexShape c, double length, int depth, double a, double b) const;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    
private:
    
    double L;
    int N;
    double A;
    
    sf::ConvexShape root;
    sf::Vector2f origin;
    std::vector<sf::Color> rainbow = {sf::Color(139,0,255),sf::Color(75,0,130),sf::Color(0,0,255),sf::Color(0,255,0),sf::Color(255,255,0),sf::Color(255,127,0),sf::Color(255,0,0)};
    double offset;
    
    
};

#endif /* PTree_hpp */
