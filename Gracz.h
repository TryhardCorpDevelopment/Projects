<<<<<<< HEAD
#include <SFML/Graphics.hpp>
#include <string>

class Gracz
{
private:
    int zycie;
    float predkosc;
    float stamina;
    float czasSprintu;
    sf::Vector2f pozycja;
    bool czyBiegnie;

    sf::Texture tekstura;
    sf::Sprite sprite;

    //Dodac obiekt klasy z animacjami
    //Dodac obiekt klasy z ekwipunkiem

public:
    Gracz(int zycieGracza, float predkoscGracza, float staminaGracza);
    void teksturaGracza();//<-string sciezka
    void aktualizuj(sf::RenderWindow& okno);
    void przesun(sf::Vector2f ekran, sf::Vector2f kierunek);
    void ustaw(sf::Vector2f ekran, sf::Vector2f wspolrzedne);
    void poruszanie(float nowaPredkosc);
    void kondycja(float nowaStamina);

private:
    bool czyMoznaPrzesunac(sf::Vector2f ekran);
    void zmienPozycje(sf::Vector2f kierunek);
};
=======
#include <SFML/Graphics.hpp>
#include <string>

class Gracz
{
private:
    float predkosc;
    float stamina;
    float czasSprintu;
    sf::Vector2f pozycja;
    bool czyBiegnie;

    sf::Texture tekstura;
    sf::Sprite sprite;

    //Dodac obiekt klasy z animacjami
    //Dodac obiekt klasy z ekwipunkiem

public:
    Gracz(float predkoscGracza, float stamina);

    void aktualizuj(sf::RenderWindow& okno);
    void zmienPozycje(sf::Vector2f kierunek);
    void ustawPozycje(sf::Vector2f wspolrzedne);
    void zmienPredkosc(float nowaPredkosc);
    void zmienStamine(float nowaStamina);
};
>>>>>>> 722719095cffdf33a6a445dd1ee99413052a74ab
