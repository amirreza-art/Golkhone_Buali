#include "rareflowerbuds.h"

unsigned int RareFlowerbuds::rareFlowerBud_count = 0;

RareFlowerbuds::RareFlowerbuds()
{

}

RareFlowerbuds::RareFlowerbuds(RareFlower rareFlower)
{
    this->rareFlower = rareFlower;
    inc_rareFlowerBud_count();
}

void RareFlowerbuds::set_rareFlowerBud_count(unsigned int count)
{
    rareFlowerBud_count = count;
}

void RareFlowerbuds::inc_rareFlowerBud_count()
{
    rareFlowerBud_count++;
}

void RareFlowerbuds::dec_rareFlowerBud_count()
{
    rareFlowerBud_count--;
}

unsigned int RareFlowerbuds::get_rareFlowerBud_count()
{
    return rareFlowerBud_count;
}
