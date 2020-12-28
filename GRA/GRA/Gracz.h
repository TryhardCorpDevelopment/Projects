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
    Gracz(float predkosc, float stamina);
    void zmienPredkosc(float nowaPredkosc);
    void zmienStamine(float nowaStamina);
    void aktualizuj(sf::Vector2u, sf::Window& okno);
    void biegnij();
};
