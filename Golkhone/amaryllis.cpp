#include "amaryllis.h"

extern long int money;

unsigned int Amaryllis::amaryllis_count = 0;

Amaryllis::Amaryllis(OrdinaryFlowerBuds orBud, Water water)
{
    this->orBud = orBud;
    this->water = water;
    inc_Amaryllis_count();
}

Amaryllis::Amaryllis()
{

}

Amaryllis::~Amaryllis()
{
    money = money + selling_price - OrdinaryFlowerBuds::get_price();
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
