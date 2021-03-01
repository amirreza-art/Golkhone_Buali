#include "tulip.h"

extern long int money;

unsigned int Tulip::tulip_count = 0;

void Tulip::picking()
{
    inc_tulip_count();
}

Tulip::Tulip(RareFlowerbuds rareBud, Water water)
{
    this->rareBud = rareBud;
    this->water = water;
}

Tulip::Tulip()
{

}

Tulip::~Tulip()
{
    money = money + selling_price - RareFlowerbuds::get_price();
    RareFlowerbuds::inc_rareFlowerBud_count();
    dec_tulip_count();
}

long int Tulip::get_price()
{
    return selling_price;
}

Tulip::Tulip(RareFlowerbuds rareBud, Water water, SprayingMaterial spraying)
{
    this->rareBud = rareBud;
    this->water = water;
    this->spraying = spraying;
}

void Tulip::set_tulip_count(unsigned int count)
{
    tulip_count = count;
}

void Tulip::inc_tulip_count()
{
    tulip_count++;
}

void Tulip::dec_tulip_count()
{
    tulip_count--;
}

unsigned int Tulip::get_tulip_count()
{
    return tulip_count;
}
