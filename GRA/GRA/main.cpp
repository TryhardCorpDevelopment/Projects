#include "map.h"

int main()
{
sf::RenderWindow window(sf::VideoMode(200,200), "SFML works!",sf::Style::Fullscreen);
sf::Event event;
window.setVerticalSyncEnabled(true);
window.setFramerateLimit(60);
while (window.isOpen())
{
    while ( window.pollEvent( event ))
        {
            if (event.type == sf::Event::Closed)
                window.close();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }

        window.clear();
        window.display();
    }


    return 0;
}
