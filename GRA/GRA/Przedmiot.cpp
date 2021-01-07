#include "SFML/Graphics.hpp"
#include "Przedmiot.h"
#include <string>

Przedmiot::Przedmiot()
{}

Przedmiot::Przedmiot(std::string nazwaPrzedmiotu, std::string teksturaPlik)
{
    nazwa = nazwaPrzedmiotu;
    teksturaPrzedmiotu(teksturaPlik);
    rozmiar = (sf::Vector2f)tekstura.getSize();
}

void Przedmiot::teksturaPrzedmiotu(std::string teksturaPlik)
{
    std::string sciezka = "resources/tekstury/" + teksturaPlik;
    tekstura.loadFromFile(sciezka);
    sprite.setTexture(tekstura);
}

void Przedmiot::ustaw(sf::Vector2f ekran, sf::Vector2f wspolrzedne)
{
    if (czyMoznaUstawic(ekran, wspolrzedne))
    {
        pozycja.x = wspolrzedne.x;
        pozycja.y = wspolrzedne.y;
    }
    else
        throw std::invalid_argument("Nie mozna ustawic przedmiotu: '" + nazwa + "' na podanej pozycji");
}

bool Przedmiot::czyMoznaUstawic(sf::Vector2f ekran, sf::Vector2f wspolrzedne)
{
    return (wspolrzedne.x >= 0 && wspolrzedne.x <= ekran.x - tekstura.getSize().x) && (wspolrzedne.y >= 0 && wspolrzedne.y <= ekran.y - tekstura.getSize().y);
}
