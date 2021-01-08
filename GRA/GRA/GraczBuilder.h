#ifndef GraczBuilder_h
#define GraczBuilder_h

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
    GraczBuilder& bieg(bool bieg);
    Gracz& build();
};

#endif
