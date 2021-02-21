#include "ordinaryflowerbuds.h"

extern long int money;

unsigned int OrdinaryFlowerBuds::ordinaryFlowerBud_count = 0;

OrdinaryFlowerBuds::OrdinaryFlowerBuds(OrdinaryFlowers orFlower)
{
    this->orFlower = orFlower;
    inc_ordinaryFlowerBud_count();
}

OrdinaryFlowerBuds::OrdinaryFlowerBuds()
{

}

OrdinaryFlowerBuds::~OrdinaryFlowerBuds()
{
    money += return_price;
    dec_ordinaryFlowerBud_count();
}

void OrdinaryFlowerBuds::set_ordinaryFlowerBud_count(unsigned int count)
{
    ordinaryFlowerBud_count = count;
}

void OrdinaryFlowerBuds::inc_ordinaryFlowerBud_count()
{
    ordinaryFlowerBud_count++;
}

void OrdinaryFlowerBuds::dec_ordinaryFlowerBud_count()
{
    ordinaryFlowerBud_count--;
}

unsigned int OrdinaryFlowerBuds::get_ordinaryFlowerBud_count()
{
    return ordinaryFlowerBud_count;
}
