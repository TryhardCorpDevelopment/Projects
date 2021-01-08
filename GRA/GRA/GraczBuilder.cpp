#include "GraczBuilder.h"

GraczBuilder::GraczBuilder(std::string plik)
{
    plikTekstury = plik;

    zycieGracza = 100.0f;
    predkoscGracza = 10.0f;
    staminaGracza = 100.0f;
    pozycjaGracza.x = 0.0f;
    pozycjaGracza.y = 0.0f;
    czyBiegnie = false;
}

GraczBuilder& GraczBuilder::zycie(int zycie)
{
    zycieGracza = zycie;
    return *this;
}

GraczBuilder& GraczBuilder::predkosc(float predkosc)
{
    predkoscGracza = predkosc;
    return *this;
}

GraczBuilder& GraczBuilder::stamina(float stamina)
{
    staminaGracza = stamina;
    return *this;
}

GraczBuilder& GraczBuilder::pozycja(sf::Vector2f wspolrzedne)
{
    pozycjaGracza.x = wspolrzedne.x;
    pozycjaGracza.y = wspolrzedne.y;
    return *this;
}

Gracz& GraczBuilder::build()
{
    Gracz* gracz = new Gracz(plikTekstury, zycieGracza, predkoscGracza, staminaGracza, pozycjaGracza, czyBiegnie);
    return *gracz;
}
