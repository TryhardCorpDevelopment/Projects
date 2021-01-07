#ifndef GraczBuilder_h
#define GraczBuilder_h

#include "Builder.h"
#include "Gracz.h"
#include <string>

class GraczBuilder: public Builder
{
private:
    //Gracz* gracz;

public:
    GraczBuilder(std::string plik );
    ~GraczBuilder();
    void resetuj();
    void tekstura(std::string plik);
    void zycie(int zycieGracza);
    void predkosc(float predkoscGracza);
    void stamina(float staminaGracza);
    void pozycja(sf::Vector2f ekran, sf::Vector2f wspolrzedne);
    //Gracz* build();

private:
    bool czyMoznaUstawic(sf::Vector2f ekran, sf::Vector2f wspolrzedne);
};

#endif
