#include "amaryllis.h"

extern long int money;

unsigned int Amaryllis::amaryllis_count = 0;

void Amaryllis::picking()
{
    inc_Amaryllis_count();
}

Amaryllis::Amaryllis(OrdinaryFlowerBuds orBud, Water water):OrdinaryFlowerBuds(orBud)
{
    this->water = water;
}

Amaryllis::~Amaryllis()
{
    money = money + selling_price - OrdinaryFlowerBuds::get_price();
    OrdinaryFlowerBuds::inc_ordinaryFlowerBud_count();
    dec_Amaryllis_count();
}

long int Amaryllis::get_price()
{
    return selling_price;
}

void Amaryllis::set_Amaryllis_count(unsigned int count)
{
    amaryllis_count = count;
}

void Amaryllis::inc_Amaryllis_count()
{
    amaryllis_count++;
}

void Amaryllis::dec_Amaryllis_count()
{
    amaryllis_count--;
}

unsigned int Amaryllis::get_Amaryllis_count()
{
    return amaryllis_count;
}
