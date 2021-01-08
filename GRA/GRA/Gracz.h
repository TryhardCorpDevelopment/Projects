#ifndef Gracz_h
#define Gracz_h

#include <SFML/Graphics.hpp>
#include <string>
#include "Przedmiot.h"

class Gracz
{
private:
    int zycie;
    float predkosc;
    float stamina;
    sf::Vector2f pozycja;
    bool czyBiegnie;

    sf::Texture tekstura;
    sf::Sprite sprite;

    Przedmiot ekwipunek[4];

    // Dodac obiekt klasy z animacjami
    // Dodac obiekt klasy z ekwipunkiem

public:
    // Brak

public:
    Gracz(std::string plik, int zycieGracza, float predkoscGracza, float staminaGracza, sf::Vector2f pozycja, bool Bieg);
    void teksturaGracza(std::string plik);
    void aktualizuj(sf::RenderTexture& okno);
    void przesun(sf::Vector2f ekran, sf::Vector2f kierunek);
    void ustaw(sf::Vector2f ekran, sf::Vector2f wspolrzedne);
    void poruszanie(float nowaPredkosc);
    void kondycja(float nowaStamina);
    int getZycie();
    float getPredkosc();
    float getStamina();
    sf::Vector2f getPozycja();
    sf::Vector2f getRozmiar();

private:
    //Gracz(std::string plik, int zycieGracza, float predkoscGracza, float staminaGracza, sf::Vector2f pozycja, bool Bieg);
    void ustaw(sf::Vector2f wspolrzedne);
    bool czyMoznaPrzesunac(sf::Vector2f ekran, sf::Vector2f kierunek);
    bool czyMoznaUstawic(sf::Vector2f ekran, sf::Vector2f wspolrzedne);
    void zmienPozycje(sf::Vector2f kierunek);
};



#endif
