#include "map.h"
#include "Gracz.h"

int main()
{
sf::RenderWindow window(sf::VideoMode(200,200), "GRA",sf::Style::Fullscreen);
sf::Event event;

Gracz gracz;
sf::Vector2f kierunek;

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
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                {
                    kierunek.x = -1;
                    keirunek.y = 0;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                {
                    kierunek.x = 1;
                    keirunek.y = 0;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                {
                    kierunek.x = 0;
                    keirunek.y = -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                {
                    kierunek.x = 0;
                    keirunek.y = 1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
                    gracz.biegnij();
        }

        window.clear();
        gracz.aktualizuj(kierunek, okno);
        window.display();
    }


    return 0;
}
