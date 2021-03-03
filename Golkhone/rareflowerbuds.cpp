#include "rareflowerbuds.h"

extern long int money;

unsigned int RareFlowerbuds::rareFlowerBud_count = 0;

void RareFlowerbuds::picking()
{
    inc_rareFlowerBud_count();
}

RareFlowerbuds::RareFlowerbuds(const RareFlowerbuds &rfb):RareFlower(rfb)
{
    this->soil = rfb.soil;
}

RareFlowerbuds::~RareFlowerbuds()
{
    money = money + return_price - RareFlower::get_price();
    RareFlower::inc_rareFlower_count();
    dec_rareFlowerBud_count();

    delete soil;
}

RareFlowerbuds::RareFlowerbuds(RareFlower *rareFlower, Soil *soil):RareFlower(*rareFlower)
{
    money -= RareFlower::get_price();
    RareFlower::inc_rareFlower_count();
    delete rareFlower;

    this->soil = soil;
}

std::string RareFlowerbuds::get_name() const
{
    return name;
}

long int RareFlowerbuds::get_price()
{
    return return_price;
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
