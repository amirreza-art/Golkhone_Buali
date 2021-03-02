#include "magnolia.h"

extern long int money;

unsigned int Magnolia::magnolia_count = 0;

void Magnolia::picking()
{
    inc_magnolia_count();
}

Magnolia::~Magnolia()
{
    money = money + selling_price - OrnamentalFlowerBud::get_price();
    OrnamentalFlowerBud::inc_ornamentalFlowerBud_count();
    dec_magnolia_count();
}

Magnolia::Magnolia(OrnamentalFlowerBud *ornamentalFlowerBud, MagnoliaExtract magnoliaExtract)
    :OrnamentalFlowerBud(*ornamentalFlowerBud)
{
    money = money - OrnamentalFlowerBud::get_price() + OrnamentalBud::get_price();
    OrnamentalBud::dec_ornamentalBud_count();
    OrnamentalFlowerBud::inc_ornamentalFlowerBud_count();
    delete ornamentalFlowerBud;

    this->magnoliaExtract = magnoliaExtract;
}

long int Magnolia::get_price()
{
    return selling_price;
}

void Magnolia::set_magnolia_count(unsigned int count)
{
    magnolia_count = count;
}

void Magnolia::inc_magnolia_count()
{
    magnolia_count++;
}

void Magnolia::dec_magnolia_count()
{
    magnolia_count--;
}

unsigned int Magnolia::get_magnolia_count()
{
    return magnolia_count;
}
