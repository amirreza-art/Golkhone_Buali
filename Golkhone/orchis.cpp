#include "orchis.h"

extern long int money;

unsigned int Orchid::orchid_count = 0;

void Orchid::picking()
{
    inc_orchid_count();
}

Orchid::~Orchid()
{
    money = money + selling_price - OrnamentalFlowerBud::get_price();
    OrnamentalFlowerBud::inc_ornamentalFlowerBud_count();
    dec_orchid_count();
}

Orchid::Orchid(OrnamentalFlowerBud *ornamentalFlowerBud, OrchisExtract orchisExtract)
    :OrnamentalFlowerBud(*ornamentalFlowerBud)
{
    money = money - OrnamentalFlowerBud::get_price() + OrnamentalBud::get_price();
    OrnamentalBud::dec_ornamentalBud_count();
    OrnamentalFlowerBud::inc_ornamentalFlowerBud_count();
    delete ornamentalFlowerBud;

    this->orchisExtract = orchisExtract;
}

long int Orchid::get_price()
{
    return selling_price;
}

void Orchid::set_orchid_count(unsigned int count)
{
    orchid_count = count;
}

void Orchid::inc_orchid_count()
{
    orchid_count++;
}

void Orchid::dec_orchid_count()
{
    orchid_count--;
}

unsigned int Orchid::get_orchid_count()
{
    return orchid_count;
}
