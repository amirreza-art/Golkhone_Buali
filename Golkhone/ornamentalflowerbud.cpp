#include "ornamentalflowerbud.h"

extern long int money;

unsigned int OrnamentalFlowerBud::ornamentalFlowerBud_count = 0;

OrnamentalFlowerBud::OrnamentalFlowerBud()
{

}

OrnamentalFlowerBud::~OrnamentalFlowerBud()
{
    money += return_price;
    dec_ornamentalFlowerBud_count();
}

OrnamentalFlowerBud::OrnamentalFlowerBud(OrnamentalBud ornamentalBud, Water water)
{
    this->ornamentalBud = ornamentalBud;
    this->water = water;
    inc_ornamentalFlowerBud_count();
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
