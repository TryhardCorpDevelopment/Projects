#include <string>
#include "Gracz.h"
#include "map.h"

Gracz::Gracz(float predkoscGracza, float stamina)
{
    tekstura.loadFromFile("C:\\Users\\macie\\Desktop\\Maciek\\C++\\GRA\\Projects\\GRA\\GRA\\resources\\tekstury\\gracz.jpg");
    sprite.setTexture(tekstura);

    predkosc = predkoscGracza;
    czasSprintu = stamina / predkosc;
}

void Gracz::aktualizuj(sf::RenderWindow& okno)
{
    sprite.setPosition(pozycja.x, pozycja.y);

    sf::Vector2f XY;
    XY = sprite.getPosition();

    pozycja.x = XY.x;
    pozycja.y = XY.y;

    okno.draw(sprite);
}

void Gracz::zmienPozycje(sf::Vector2f kierunek)
{
    /*pozycja.x += predkosc * kierunek.x;
    pozycja.y += predkosc * kierunek.y;*/

    pozycja.x += predkosc * kierunek.x;
    pozycja.y += predkosc * kierunek.y;
}

void Gracz::ustawPozycje(sf::Vector2f wspolrzedne)
{
    pozycja.x = wspolrzedne.x;
    pozycja.y = wspolrzedne.y;

    //sprite.setPosition(pozycja.x, pozycja.y);
}

void Gracz::zmienPredkosc(float nowaPredkosc)
{
    predkosc = nowaPredkosc;
}

void Gracz::zmienStamine(float nowaStamina)
{
    stamina = nowaStamina;
}
