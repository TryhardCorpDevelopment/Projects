#ifndef GraczBuilder_h
#define GraczBuilder_h

<<<<<<< HEAD
#include "Gracz.h"
#include <string>

class GraczBuilder
{
private:
    std::string plikTekstury;
    int zycieGracza;
    float predkoscGracza;
    float staminaGracza;
    sf::Vector2f pozycjaGracza;
    bool czyBiegnie = false;

public:
    GraczBuilder(std::string plik);
    GraczBuilder& zycie(int zycie);
    GraczBuilder& predkosc(float predkosc);
    GraczBuilder& stamina(float stamina);
    GraczBuilder& pozycja(sf::Vector2f wspolrzedne);
    Gracz& build();
=======
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
>>>>>>> ebe75e7d7f55419a3427a4fde8ce1a712e11e385
};

#endif
