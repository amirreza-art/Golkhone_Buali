#include "amaryllis.h"

unsigned int Amaryllis::amaryllis_count = 0;

Amaryllis::Amaryllis(OrdinaryFlowerBuds orBud, Water water)
{
    this->orBud = orBud;
    this->water = water;
    inc_Amaryllis_count();
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
