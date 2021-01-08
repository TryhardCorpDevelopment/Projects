#include "GraczBuilder.h"
<<<<<<< HEAD

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
=======
#include "Gracz.h"
#include <string>

GraczBuilder(std::string plik)
{
    this->resetuj();
    this->tekstura(plik);
}

GraczBuilder::resetuj()
{
    this->gracz = new Gracz();
}

GraczBuilder::~GraczBuilder()
{
    delete gracz;
}

void GraczBuilder::tekstura(std::string plik) const everride
{
    std::string sciezka = "resources/tekstury/" + plik;
    this->gracz->tekstura.loadFromFile(sciezka);
    this->gracz->sprite.setTexture(this->gracz->tekstura);
}

void GraczBuilder::zycie(int zycieGracza) const override
{
    if (zycieGracza >= 100.0f)
        this->gracz->zycie = zycieGracza;
}

void GraczBuilder::predkosc(float predkoscGracza) const override
{
    if (predkoscGracza > 0.0f)
        this->gracz->predkosc = predkoscGracza;
}

void GraczBuilder::stamina(float staminaGracza) const override
{
    if (staminaGracza >= 100.0f)
        this->gracz->stamina = staminaGracza;
}

void GraczBuilder::pozycja(sf::Vector2f ekran, sf::Vector2f wspolrzedne) const override
{
    if (czyMoznaUstawic(ekran, wspolrzedne))
        this->gracz->pozycja.x = wspolrzedne.x;
        this->gracz->pozycja.y = wspolrzedne.y;
}

// Gracz* GraczBuilder::build()
// {
//     Gracz* wynikowyGracz = this->gracz;
//     this->resetuj();
//     return wynikowyGracz;
// }
>>>>>>> ebe75e7d7f55419a3427a4fde8ce1a712e11e385
