#include "rareflower.h"

unsigned int RareFlower::rareFlower_count = 0;

RareFlower::RareFlower()
{

}

RareFlower::RareFlower(RareOnion rareOnion)
{
    this->rareOnion = rareOnion;
    inc_rareFlower_count();
}

void RareFlower::set_rareFlower_count(unsigned int count)
{
    rareFlower_count = count;
}
void RareFlower::inc_rareFlower_count()
{
    rareFlower_count++;
}
void RareFlower::dec_rareFlower_count()
{
    rareFlower_count--;
}
unsigned int RareFlower::get_rareFlower_count()
{
    return rareFlower_count;
}
