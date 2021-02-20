#include "ordinaryflowers.h"

unsigned int OrdinaryFlowers::ordinaryFlower_count = 0;

OrdinaryFlowers::OrdinaryFlowers(OrdinaryUnion orUnion)
{
    this->orUnion = orUnion;
    ordinaryFlower_count++;
}

OrdinaryFlowers::OrdinaryFlowers()
{

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
