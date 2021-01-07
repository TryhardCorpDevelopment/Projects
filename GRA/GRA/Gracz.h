#ifndef Gracz_h
#define Gracz_h

#include <SFML/Graphics.hpp>
#include <string>

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

    //Dodac obiekt klasy z animacjami
    //Dodac obiekt klasy z ekwipunkiem

public:
    Gracz(std::string plik, int zycieGracza, float predkoscGracza, float staminaGracza);
    void teksturaGracza(std::string plik);
    void aktualizuj(sf::RenderTexture& okno);
    void przesun(sf::Vector2f ekran, sf::Vector2f kierunek);
    void ustaw(sf::Vector2f ekran, sf::Vector2f wspolrzedne);
    void poruszanie(float nowaPredkosc);
    void kondycja(float nowaStamina);

private:
    bool czyMoznaPrzesunac(sf::Vector2f ekran, sf::Vector2f kierunek);
    bool czyMoznaUstawic(sf::Vector2f ekran, sf::Vector2f wspolrzedne);
    void zmienPozycje(sf::Vector2f kierunek);
};

#endif
