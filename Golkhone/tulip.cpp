#include "tulip.h"

extern long int money;

unsigned int Tulip::tulip_count = 0;

Tulip::Tulip(RareFlowerbuds rareBud, Water water)
{
    this->rareBud = rareBud;
    this->water = water;
    inc_tulip_count();
}

Tulip::Tulip()
{

}

Tulip::~Tulip()
{
    money += selling_price;
    dec_tulip_count();
}

Tulip::Tulip(RareFlowerbuds rareBud, Water water, SprayingMaterial spraying)
{
    this->rareBud = rareBud;
    this->water = water;
    this->spraying = spraying;
    inc_tulip_count();
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
