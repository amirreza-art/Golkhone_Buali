#include "ornamentalbud.h"

extern long int money;

unsigned int OrnamentalBud::ornamentalBud_count = 0;

void OrnamentalBud::picking()
{
    inc_ornamentalBud_count();
}

OrnamentalBud::OrnamentalBud(const OrnamentalBud &ob):OrnamentalFlower(ob)
{
    this->soil = ob.soil;
}

OrnamentalBud::OrnamentalBud(OrnamentalFlower *ornamentalFlower, Soil *soil)
    :OrnamentalFlower(*ornamentalFlower)
{
    money -= OrnamentalFlower::get_price();
    OrnamentalFlower::inc_ornamentalFlower_count();
    delete ornamentalFlower;

    this->soil = soil;
}

OrnamentalBud::~OrnamentalBud()
{
    money = money + return_price - OrnamentalFlower::get_price();
    OrnamentalFlower::inc_ornamentalFlower_count();
    dec_ornamentalBud_count();

    delete soil;
}

std::string OrnamentalBud::get_name() const
{
    return name;
}

long int OrnamentalBud::get_price()
{
    return return_price;
}

void OrnamentalBud::set_ornamentalBud_count(unsigned int count)
{
    ornamentalBud_count = count;
}

void OrnamentalBud::inc_ornamentalBud_count()
{
    ornamentalBud_count++;
}

void OrnamentalBud::dec_ornamentalBud_count()
{
    ornamentalBud_count--;
}

unsigned int OrnamentalBud::get_ornamentalBud_count()
{
    return ornamentalBud_count;
}
