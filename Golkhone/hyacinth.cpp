#include "hyacinth.h"

extern long int money;

unsigned int Hyacinth::hyacinth_count = 0;

void Hyacinth::picking()
{
    inc_hyacinth_count();
}

Hyacinth::Hyacinth(RareFlowerbuds *rareBud, Water *water):RareFlowerbuds(*rareBud)
{
    money =money - RareFlowerbuds::get_price() + RareFlower::get_price();
    RareFlower::dec_rareFlower_count();
    RareFlowerbuds::inc_rareFlowerBud_count();
    delete rareBud;

    this->water = water;
}

Hyacinth::Hyacinth(RareFlowerbuds *rareBud, Water *water, SprayingMaterial *spraying)
    :RareFlowerbuds(*rareBud)
{
    money =money - RareFlowerbuds::get_price() + RareFlower::get_price();
    RareFlower::dec_rareFlower_count();
    RareFlowerbuds::inc_rareFlowerBud_count();
    delete rareBud;

    this->water = water;
    this->spraying = spraying;
}

Hyacinth::~Hyacinth()
{
    money = money + selling_price - RareFlowerbuds::get_price();
    RareFlowerbuds::inc_rareFlowerBud_count();
    dec_hyacinth_count();

    delete water;
    delete spraying;
}

Hyacinth::Hyacinth(const Hyacinth &h):RareFlowerbuds(h)
{
    this->water = h.water;
    this->spraying = h.spraying;
}

std::string Hyacinth::get_name() const
{
    return name;
}

long int Hyacinth::get_price()
{
    return selling_price;
}

void Hyacinth::set_hyacinth_count(unsigned int count)
{
    hyacinth_count = count;
}

void Hyacinth::inc_hyacinth_count()
{
    hyacinth_count++;
}

void Hyacinth::dec_hyacinth_count()
{
    hyacinth_count--;
}

unsigned int Hyacinth::get_hyacinth_count()
{
    return hyacinth_count;
}
