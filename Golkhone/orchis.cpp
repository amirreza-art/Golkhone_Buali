#include "orchis.h"

extern long int money;

unsigned int Orchid::orchid_count = 0;

Orchid::Orchid()
{

}

Orchid::~Orchid()
{
    money = money + selling_price - OrnamentalFlowerBud::get_price();
    dec_orchid_count();
}

Orchid::Orchid(OrnamentalFlowerBud ornamentalFlowerBud, OrchisExtract orchisExtract)
{
    this->ornamentalFlowerBud = ornamentalFlowerBud;
    this->orchisExtract = orchisExtract;
    inc_orchid_count();
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
