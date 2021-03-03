#include "tuberose.h"

extern long int money;

unsigned int Tuberose::tuberose_count = 0;

void Tuberose::picking()
{
    inc_tuberose_count();
}

Tuberose::Tuberose(RareFlowerbuds *rareBud, Water *water):RareFlowerbuds(*rareBud)
{
    money =money - RareFlowerbuds::get_price() + RareFlower::get_price();
    RareFlower::dec_rareFlower_count();
    RareFlowerbuds::inc_rareFlowerBud_count();
    delete rareBud;

    this->water = water;
}

Tuberose::Tuberose(RareFlowerbuds *rareBud, Water *water, SprayingMaterial *spraying)
    :RareFlowerbuds(*rareBud)
{
    money =money - RareFlowerbuds::get_price() + RareFlower::get_price();
    RareFlower::dec_rareFlower_count();
    RareFlowerbuds::inc_rareFlowerBud_count();
    delete rareBud;

    this->water = water;
    this->spraying = spraying;
}

Tuberose::~Tuberose()
{
    money = money + selling_price - RareFlowerbuds::get_price();
    RareFlowerbuds::inc_rareFlowerBud_count();
    dec_tuberose_count();

    delete water;
    delete spraying;
}

std::string Tuberose::get_name() const
{
    return name;
}

long int Tuberose::get_price()
{
    return selling_price;
}

void Tuberose::set_tuberose_count(unsigned int count)
{
    tuberose_count = count;
}
void Tuberose::inc_tuberose_count()
{
    tuberose_count++;
}
void Tuberose::dec_tuberose_count()
{
    tuberose_count--;
}
unsigned int Tuberose::get_tuberose_count()
{
    return tuberose_count;
}
