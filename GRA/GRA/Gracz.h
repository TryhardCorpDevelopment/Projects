#include <SFML/Graphics.hpp>
#include <string>

class Gracz
{
private:
    float predkosc;
    float stamina;
    float czasSprintu;
    sf::Vector2f pozycja;

    sf::Texture tekstura;
    sf::Sprite sprite;

    //Dodac obiekt klasy z animacjami
    //Dodac obiekt klasy z ekwipunkiem

public:
    Gracz(float predkoscGracza, float stamina);

    void aktualizuj(sf::RenderWindow& okno);
    void zmienPozycje(sf::Vector2f kierunek);
    void biegnij();
    void ustawPozycje(sf::Vector2f wspolrzedne);
    void zmienPredkosc(float nowaPredkosc);
    void zmienStamine(float nowaStamina);
};
