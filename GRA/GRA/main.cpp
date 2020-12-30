#include "map.h"
#include "Gracz.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200,200), "GRA",sf::Style::Fullscreen);

    sf::Vector2f rozmiarEkranu = (sf::Vector2f) window.getSize();
    sf::Vector2f kierunek;

    float predkoscGracza = 10.0f;

    Gracz gracz(100, predkoscGracza, 100.0f);
    gracz.ustaw(rozmiarEkranu, sf::Vector2f(200.0f, 300.0f));


    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
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
                gracz.przesun(rozmiarEkranu, kierunek);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            {
                kierunek.x = 1.0f;
                kierunek.y = 0.0f;
                gracz.przesun(rozmiarEkranu, kierunek);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                kierunek.x = 0.0f;
                kierunek.y = -1.0f;
                gracz.przesun(rozmiarEkranu, kierunek);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                kierunek.x = 0.0f;
                kierunek.y = 1.0f;
                gracz.przesun(rozmiarEkranu, kierunek);
            }

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::LShift)
                gracz.poruszanie(predkoscGracza * 2.0);
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::LShift)
                gracz.poruszanie(predkoscGracza);

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::LShift)
                gracz.poruszanie(predkoscGracza * 2.0);
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::LShift)
                gracz.poruszanie(predkoscGracza);


        window.clear();
        gracz.aktualizuj(window);
        window.display();
    }
    return 0;
}
