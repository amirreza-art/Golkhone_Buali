#include "ornamentalbud.h"

unsigned int OrnamentalBud::ornamentalBud_count = 0;

OrnamentalBud::OrnamentalBud()
{

}

OrnamentalBud::OrnamentalBud(OrnamentalFlower ornamentalFlower)
{
    this->ornamentalFlower = ornamentalFlower;
    inc_ornamentalBud_count();
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
