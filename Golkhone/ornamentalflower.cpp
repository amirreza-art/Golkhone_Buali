#include "ornamentalflower.h"

unsigned int OrnamentalFlower::ornamentalFlower_count = 0;

OrnamentalFlower::OrnamentalFlower()
{

}

OrnamentalFlower::OrnamentalFlower(OrnamentalOnion ornamentalOnion)
{
    this->ornamentalOnion = ornamentalOnion;
    inc_ornamentalFlower_count();
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
