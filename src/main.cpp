#include<iostream>
#include<SFML/Graphics.hpp>
#include<time.h>

int main(){

    // Setting the ratio of the window
    sf::RenderWindow window(sf::VideoMode(320,480), "The Game!");

    sf::Texture tetris_block;
    tetris_block.loadFromFile("../images/block.png");
    
    sf::Sprite block(tetris_block);
    
    while(window.isOpen()){
        sf::Event e;

        // looping through the point when the window is closed by the user
        while(window.pollEvent(e)){
            if(e.type == sf::Event::Closed){
                window.close();
            }
        }

        window.clear(sf::Color::White);
        //window.draw(background);
        block.sf::Transformable::setPosition(36,45); 	

        window.draw(block);
        window.display();
    }

    return 0;

}
