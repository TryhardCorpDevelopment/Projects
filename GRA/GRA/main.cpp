#include "map.h"
#include "Gracz.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200,200), "GRA",sf::Style::Fullscreen);

    float predkoscGracza = 10.0f;

    Gracz gracz(predkoscGracza, 100.0f);
    gracz.ustawPozycje(sf::Vector2f(200.0f, 300.0f));
    sf::Vector2f kierunek;

    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);
    while (window.isOpen())
    {
        sf::Event event;
        while ( window.pollEvent( event ))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            {
                kierunek.x = -1.0f;
                kierunek.y = 0.0f;
                gracz.zmienPozycje(kierunek);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            {
                kierunek.x = 1.0f;
                kierunek.y = 0.0f;
                gracz.zmienPozycje(kierunek);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                kierunek.x = 0.0f;
                kierunek.y = -1.0f;
                gracz.zmienPozycje(kierunek);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                kierunek.x = 0.0f;
                kierunek.y = 1.0f;
                gracz.zmienPozycje(kierunek);
            }

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::LShift)
                gracz.zmienPredkosc(predkoscGracza * 2.0);
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::LShift)
                gracz.zmienPredkosc(predkoscGracza);

        window.clear();
        gracz.aktualizuj(window);
        window.display();
    }


    return 0;
}
