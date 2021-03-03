#include "rareflower.h"

extern long int money;

unsigned int RareFlower::rareFlower_count = 0;

void RareFlower::picking()
{
    inc_rareFlower_count();
}

RareFlower::RareFlower(const RareFlower &rf)
{
    this->rareOnion = rf.rareOnion;
}

RareFlower::~RareFlower()
{
    money += return_price;
    dec_rareFlower_count();

    delete rareOnion;
}

std::string RareFlower::get_name() const
{
    return name;
}

long int RareFlower::get_price()
{
    return return_price;
}

RareFlower::RareFlower(RareOnion *rareOnion)
{
    this->rareOnion = rareOnion;
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
