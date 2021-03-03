#include "dahlia.h"

extern long int money;

unsigned int Dahlia::dahlia_count = 0;

void Dahlia::picking()
{
    inc_dahlia_count();
}

Dahlia::Dahlia(OrdinaryFlowerBuds *orBud, Water *water):OrdinaryFlowerBuds(*orBud)
{
    OrdinaryFlowerBuds::inc_ordinaryFlowerBud_count();
    OrdinaryFlowers::dec_ordinaryFlower_count();
    money = money - OrdinaryFlowerBuds::get_price() + OrdinaryFlowers::get_price();
    delete orBud;

    this->water = water;
}

Dahlia::~Dahlia()
{
    money = money + selling_price - OrdinaryFlowerBuds::get_price();
    OrdinaryFlowerBuds::inc_ordinaryFlowerBud_count();
    dec_dahlia_count();

    delete water;
}

std::string Dahlia::get_name() const
{
    return name;
}

long int Dahlia::get_price()
{
    return selling_price;
}

void Dahlia::set_dahlia_count(unsigned int count)
{
    dahlia_count = count;
}

void Dahlia::inc_dahlia_count()
{
    dahlia_count++;
}

void Dahlia::dec_dahlia_count()
{
    dahlia_count--;
}

unsigned int Dahlia::get_dahlia_count()
{
    return dahlia_count;
}
