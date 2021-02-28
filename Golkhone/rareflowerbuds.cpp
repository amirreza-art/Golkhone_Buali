#include "rareflowerbuds.h"

extern long int money;

unsigned int RareFlowerbuds::rareFlowerBud_count = 0;

RareFlowerbuds::RareFlowerbuds()
{

}

RareFlowerbuds::~RareFlowerbuds()
{
    money = money + return_price - RareFlower::get_price();
    RareFlower::inc_rareFlower_count();
    dec_rareFlower_count();
}

long int RareFlowerbuds::get_price()
{
    return return_price;
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
