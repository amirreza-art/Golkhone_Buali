#include "tulip.h"

extern long int money;

unsigned int Tulip::tulip_count = 0;

void Tulip::picking()
{
    inc_tulip_count();
}

Tulip::Tulip(RareFlowerbuds *rareBud, Water *water):RareFlowerbuds(*rareBud)
{
    money =money - RareFlowerbuds::get_price() + RareFlower::get_price();
    RareFlower::dec_rareFlower_count();
    RareFlowerbuds::inc_rareFlowerBud_count();
    delete rareBud;

    this->water = water;
}

Tulip::Tulip(RareFlowerbuds *rareBud, Water *water, SprayingMaterial *spraying)
    :RareFlowerbuds(*rareBud)
{
    money =money - RareFlowerbuds::get_price() + RareFlower::get_price();
    RareFlower::dec_rareFlower_count();
    RareFlowerbuds::inc_rareFlowerBud_count();
    delete rareBud;

    this->water = water;
    this->spraying = spraying;
}

Tulip::~Tulip()
{
    money = money + selling_price - RareFlowerbuds::get_price();
    RareFlowerbuds::inc_rareFlowerBud_count();
    dec_tulip_count();

    delete water;
    delete spraying;
}

std::string Tulip::get_name() const
{
    return name;
}

long int Tulip::get_price()
{
    return selling_price;
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
