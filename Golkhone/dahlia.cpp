#include "dahlia.h"

extern long int money;

unsigned int Dahlia::dahlia_count = 0;

Dahlia::Dahlia(OrdinaryFlowerBuds orBud, Water water)
{
    this->orBud = orBud;
    this->water = water;
}

Dahlia::Dahlia()
{

}

Dahlia::~Dahlia()
{
    money = money + selling_price - OrdinaryFlowerBuds::get_price();
    dec_dahlia_count();
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
