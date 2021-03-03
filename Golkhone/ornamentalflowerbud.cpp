#include "ornamentalflowerbud.h"

extern long int money;

unsigned int OrnamentalFlowerBud::ornamentalFlowerBud_count = 0;

void OrnamentalFlowerBud::picking()
{
    inc_ornamentalFlowerBud_count();
}

OrnamentalFlowerBud::OrnamentalFlowerBud(const OrnamentalFlowerBud &ofb):OrnamentalBud(ofb)
{
    this->water = ofb.water;
}

OrnamentalFlowerBud::~OrnamentalFlowerBud()
{
    money = money + return_price - OrnamentalBud::get_price();
    OrnamentalBud::inc_ornamentalBud_count();
    dec_ornamentalFlowerBud_count();
}

OrnamentalFlowerBud::OrnamentalFlowerBud(OrnamentalBud *ornamentalBud, Water water)
    :OrnamentalBud(*ornamentalBud)
{
    money = money - OrnamentalBud::get_price() + OrnamentalFlower::get_price();
    OrnamentalFlower::dec_ornamentalFlower_count();
    OrnamentalBud::inc_ornamentalBud_count();
    delete ornamentalBud;

    this->water = water;
}

std::string OrnamentalFlowerBud::get_name() const
{
    return name;
}

long int OrnamentalFlowerBud::get_price()
{
    return return_price;
}

void OrnamentalFlowerBud::set_ornamentalFlowerBud_count(unsigned int count)
{
    ornamentalFlowerBud_count = count;
}

void OrnamentalFlowerBud::inc_ornamentalFlowerBud_count()
{
    ornamentalFlowerBud_count++;
}

void OrnamentalFlowerBud::dec_ornamentalFlowerBud_count()
{
    ornamentalFlowerBud_count--;
}

unsigned int OrnamentalFlowerBud::get_ornamentalFlowerBud_count()
{
    return ornamentalFlowerBud_count;
}
