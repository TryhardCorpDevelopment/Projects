#ifndef Przedmiot_h
#define Przedmiot_h

#include <SFML/Graphics.hpp>
#include <string>

class Przedmiot
{
private:
    std::string nazwa;
    sf::Texture tekstura;
    sf::Sprite sprite;
    sf::Vector2f pozycja;
    sf::Vector2f rozmiar;

public:
    Przedmiot();
    Przedmiot(std::string nazwaPrzedmiotu, std::string teksturaPlik);
    void teksturaPrzedmiotu(std::string teksturaPlik);
    void ustaw(sf::Vector2f ekran, sf::Vector2f wspolrzedne);

private:
    bool czyMoznaUstawic(sf::Vector2f ekran, sf::Vector2f wspolrzedne);
};

#endif
