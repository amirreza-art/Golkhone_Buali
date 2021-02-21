#include "orchis.h"

unsigned int Orchid::orchid_count = 0;

Orchid::Orchid()
{

}

Orchid::Orchid(OrnamentalFlowerBud ornamentalFlowerBud, OrchisExtract orchisExtract)
{
    this->ornamentalFlowerBud = ornamentalFlowerBud;
    this->orchisExtract = orchisExtract;
    inc_orchid_count();
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
