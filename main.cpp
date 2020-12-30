#include "map.h"
#include "Gracz.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200,200), "GRA",sf::Style::Fullscreen);
<<<<<<< HEAD
    sf::Vector2f rozmiarEkranu = (sf::Vector2f) window.getSize();

    float predkoscGracza = 10.0f;

    Gracz gracz(100, predkoscGracza, 100.0f);
    gracz.ustaw(rozmiarEkranu, sf::Vector2f(200.0f, 300.0f));
=======

    float predkoscGracza = 10.0f;

    Gracz gracz(predkoscGracza, 100.0f);
    gracz.ustawPozycje(sf::Vector2f(200.0f, 300.0f));
>>>>>>> 722719095cffdf33a6a445dd1ee99413052a74ab
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
<<<<<<< HEAD
                gracz.przesun(rozmiarEkranu, kierunek);
=======
                gracz.zmienPozycje(kierunek);
>>>>>>> 722719095cffdf33a6a445dd1ee99413052a74ab
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            {
                kierunek.x = 1.0f;
                kierunek.y = 0.0f;
<<<<<<< HEAD
                gracz.przesun(rozmiarEkranu, kierunek);
=======
                gracz.zmienPozycje(kierunek);
>>>>>>> 722719095cffdf33a6a445dd1ee99413052a74ab
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                kierunek.x = 0.0f;
                kierunek.y = -1.0f;
<<<<<<< HEAD
                gracz.przesun(rozmiarEkranu, kierunek);
=======
                gracz.zmienPozycje(kierunek);
>>>>>>> 722719095cffdf33a6a445dd1ee99413052a74ab
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                kierunek.x = 0.0f;
                kierunek.y = 1.0f;
<<<<<<< HEAD
                gracz.przesun(rozmiarEkranu, kierunek);
            }

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::LShift)
                gracz.poruszanie(predkoscGracza * 2.0);
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::LShift)
                gracz.poruszanie(predkoscGracza);
=======
                gracz.zmienPozycje(kierunek);
            }

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::LShift)
                gracz.zmienPredkosc(predkoscGracza * 2.0);
            if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::LShift)
                gracz.zmienPredkosc(predkoscGracza);
>>>>>>> 722719095cffdf33a6a445dd1ee99413052a74ab

        window.clear();
        gracz.aktualizuj(window);
        window.display();
    }


    return 0;
}
