#include "ordinaryflowers.h"

extern long int money;

unsigned int OrdinaryFlowers::ordinaryFlower_count = 0;

void OrdinaryFlowers::picking()
{
    inc_ordinaryFlower_count();
}

OrdinaryFlowers::OrdinaryFlowers(OrdinaryUnion orUnion)
{
    this->orUnion = orUnion;
}

OrdinaryFlowers::OrdinaryFlowers()
{

}

OrdinaryFlowers::~OrdinaryFlowers()
{
    money += return_price;
    dec_ordinaryFlower_count();
}

long int OrdinaryFlowers::get_price()
{
    return return_price;
}

void OrdinaryFlowers::set_ordinaryFlower_count(unsigned int count)
{
    ordinaryFlower_count = count;
}

void OrdinaryFlowers::inc_ordinaryFlower_count()
{
    ordinaryFlower_count++;
}

void OrdinaryFlowers::dec_ordinaryFlower_count()
{
    ordinaryFlower_count--;
}

unsigned int OrdinaryFlowers::get_ordinaryFlower_count()
{
    return ordinaryFlower_count;
}
