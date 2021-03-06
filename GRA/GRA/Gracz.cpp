#include "SFML/Graphics.hpp"
#include "Gracz.h"
#include "Przedmiot.h"
#include "map.h"
#include <string>
#include <iostream>

Gracz::Gracz(std::string plik, int zycieGracza, float predkoscGracza, float staminaGracza, sf::Vector2f pozycjaGracza, bool bieg)
{
    if (zycieGracza >= 100)
        zycie = zycieGracza;
    else
        throw std::invalid_argument("Niepoprawna wartosc zycia gracza");

    if (predkoscGracza > 0.0f)
        predkosc = predkoscGracza;
    else
        throw std::invalid_argument("Niepoprawna wartosc predkosci gracza");

    if (staminaGracza > 0.0f)
        stamina = staminaGracza;
    else
        throw std::invalid_argument("Niepoprawna wartosc staminy gracza");

    czyBiegnie = bieg;
    ustaw(pozycja);
    teksturaGracza(plik);
}

void Gracz::teksturaGracza(std::string plik)
{
    std::string sciezka = "resources/tekstury/" + plik;
    tekstura.loadFromFile(sciezka);
    sprite.setTexture(tekstura);
}

void Gracz::aktualizuj(sf::RenderTexture& okno)
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
    if (czyMoznaPrzesunac(ekran, kierunek))
        zmienPozycje(kierunek);
    else
        throw std::invalid_argument("Nie mozna przesunac gracza o podane wartosci");
}

bool Gracz::czyMoznaPrzesunac(sf::Vector2f ekran, sf::Vector2f kierunek)
{
    float odlegloscX = predkosc * kierunek.x;
    float odlegloscY = predkosc * kierunek.y;

    if (pozycja.x + odlegloscX >= 0 && pozycja.x + odlegloscX <= ekran.x - tekstura.getSize().x)
        if (pozycja.y + odlegloscY >= 0 && pozycja.y + odlegloscY <= ekran.y - tekstura.getSize().y)
            return true;

    return false;
}

void Gracz::zmienPozycje(sf::Vector2f kierunek)
{
    pozycja.x += predkosc * kierunek.x;
    pozycja.y += predkosc * kierunek.y;
}

void Gracz::ustaw(sf::Vector2f wspolrzedne)
{
    pozycja.x = wspolrzedne.x;
    pozycja.y = wspolrzedne.y;
}

void Gracz::ustaw(sf::Vector2f ekran, sf::Vector2f wspolrzedne)
{
    if (czyMoznaUstawic(ekran, wspolrzedne))
    {
        pozycja.x = wspolrzedne.x;
        pozycja.y = wspolrzedne.y;
    }
    else
        throw std::invalid_argument("Nie mozna ustawic gracza na podanej pozycji");
}

bool Gracz::czyMoznaUstawic(sf::Vector2f ekran, sf::Vector2f wspolrzedne)
{
    return (wspolrzedne.x >= 0 && wspolrzedne.x <= ekran.x - tekstura.getSize().x) && (wspolrzedne.y >= 0 && wspolrzedne.y <= ekran.y - tekstura.getSize().y);
}

void Gracz::poruszanie(float nowaPredkosc)
{
    if (nowaPredkosc > 0.0f)
        predkosc = nowaPredkosc;
    else
        throw std::invalid_argument("Podana predkosc jest mniejsza od 0");
}

void Gracz::kondycja(float nowaStamina)
{
    if (nowaStamina > 0.0f)
        stamina = nowaStamina;
    else
        throw std::invalid_argument("Podana wartosc staminy jest mniejsza od 0");
}

int Gracz::getZycie()
{
    return zycie;
}

float Gracz::getPredkosc()
{
    return predkosc;
}

float Gracz::getStamina()
{
    return stamina;
}

sf::Vector2f Gracz::getPozycja()
{
    return pozycja;
}

sf::Vector2f Gracz::getRozmiar()
{
    return (sf::Vector2f)tekstura.getSize();
}
