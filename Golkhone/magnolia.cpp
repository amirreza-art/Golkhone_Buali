#include "magnolia.h"

unsigned int Magnolia::magnolia_count = 0;

Magnolia::Magnolia()
{

}

Magnolia::Magnolia(OrnamentalFlowerBud ornamentalFlowerBud, MagnoliaExtract magnoliaExtract)
{
    this->ornamentalFlowerBud = ornamentalFlowerBud;
    this->magnoliaExtract = magnoliaExtract;
    inc_magnolia_count();
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
