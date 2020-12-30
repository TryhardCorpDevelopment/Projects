#include <string>
#include "Gracz.h"
#include "map.h"

Gracz::Gracz(int zycieGracza, float predkoscGracza, float staminaGracza)
{
    if (zycieGracza > 100)
        zycie = zycieGracza;

    if (predkoscGracza > 0.0f)
        predkosc = predkoscGracza;

    if (staminaGracza > 0.0f)
        stamina = staminaGracza;

    czasSprintu = stamina / predkosc;

    teksturaGracza();
}

void Gracz::teksturaGracza()//<- string sciezka
{
    tekstura.loadFromFile("C:\\Users\\macie\\Desktop\\Maciek\\C++\\GRA\\Projects\\GRA\\GRA\\resources\\tekstury\\najman_marcin.jpg");//<- sciezka statyczna (tymczasowo)
    sprite.setTexture(tekstura);
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

void Gracz::przesun(sf::Vector2f ekran, sf::Vector2f kierunek)
{
    if (czyMoznaPrzesunac(ekran))
        zmienPozycje(kierunek);
}

bool Gracz::czyMoznaPrzesunac(sf::Vector2f ekran)
{
    return (pozycja.x >= 0 && pozycja.x <= ekran.x) && (pozycja.y >= 0 && pozycja.y <= ekran.y);
}

void Gracz::zmienPozycje(sf::Vector2f kierunek)
{
    pozycja.x += predkosc * kierunek.x;
    pozycja.y += predkosc * kierunek.y;
}

void Gracz::ustaw(sf::Vector2f ekran, sf::Vector2f wspolrzedne)
{
    if (czyMoznaPrzesunac(ekran))
    {
        pozycja.x = wspolrzedne.x;
        pozycja.y = wspolrzedne.y;
    }
}

void Gracz::poruszanie(float nowaPredkosc)
{
    if (nowaPredkosc > 0.0f)
        predkosc = nowaPredkosc;
}

void Gracz::kondycja(float nowaStamina)
{
    if (nowaStamina > 0.0f)
        stamina = nowaStamina;
}
