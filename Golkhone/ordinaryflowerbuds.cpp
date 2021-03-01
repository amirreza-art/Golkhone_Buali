#include "ordinaryflowerbuds.h"

extern long int money;

unsigned int OrdinaryFlowerBuds::ordinaryFlowerBud_count = 0;

void OrdinaryFlowerBuds::picking()
{
    inc_ordinaryFlowerBud_count();
}

OrdinaryFlowerBuds::OrdinaryFlowerBuds(OrdinaryFlowers orFlower)
{
    this->orFlower = orFlower;
}

OrdinaryFlowerBuds::OrdinaryFlowerBuds()
{

}

OrdinaryFlowerBuds::~OrdinaryFlowerBuds()
{
    money = money + return_price - OrdinaryFlowers::get_price();
    OrdinaryFlowers::inc_ordinaryFlower_count();
    dec_ordinaryFlowerBud_count();
}

long int OrdinaryFlowerBuds::get_price()
{
    return return_price;
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
