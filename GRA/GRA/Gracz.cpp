#include "Gracz.h"
#include "map.h"

Gracz::Gracz(float predkosc, float stamina)
{
    tekstura.loadFromFile("nazwaPliku");
    sprite.setTexture(tekstura);

    czasSprintu = stamina / predkosc;
}

void Gracz::zmienPredkosc(float nowaPredkosc)
{
    predkosc = nowaPredkosc;
}

void Gracz::zmienStamine(float nowaStamina)
{
    stamina = nowaStamina;
}

void Gracz::aktualizuj(sf::Vector2u kierunek, sf::Window& okno)
{
    pozycja.x += predkosc * kierunek.x;
    pozycja.y += predkosc * kierunek.y;

    okno.draw(sprite);
}

void Gracz::biegnij()
{
    sf::Clock zegar;
    sf::Time uplynelo = zegar.getElapsedTime();
    while (uplynelo.asSeconds() <= czasSprintu)
        predkosc *= 2;
}
