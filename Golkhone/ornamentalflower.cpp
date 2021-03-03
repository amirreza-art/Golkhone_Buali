#include "ornamentalflower.h"

extern long int money;

unsigned int OrnamentalFlower::ornamentalFlower_count = 0;

void OrnamentalFlower::picking()
{
    inc_ornamentalFlower_count();
}

OrnamentalFlower::OrnamentalFlower(const OrnamentalFlower &of)
{
    this->ornamentalOnion = of.ornamentalOnion;
}

OrnamentalFlower::~OrnamentalFlower()
{
    money += return_price;
    dec_ornamentalFlower_count();

    delete ornamentalOnion;
}

OrnamentalFlower::OrnamentalFlower(OrnamentalOnion *ornamentalOnion)
{
    this->ornamentalOnion = ornamentalOnion;
}

std::string OrnamentalFlower::get_name() const
{
    return name;
}

long int OrnamentalFlower::get_price()
{
    return return_price;
}

void OrnamentalFlower::set_ornamentalFlower_count(unsigned int count)
{
    ornamentalFlower_count = count;
}

void OrnamentalFlower::inc_ornamentalFlower_count()
{
    ornamentalFlower_count++;
}

void OrnamentalFlower::dec_ornamentalFlower_count()
{
    ornamentalFlower_count--;
}

unsigned int OrnamentalFlower::get_ornamentalFlower_count()
{
    return ornamentalFlower_count;
}

