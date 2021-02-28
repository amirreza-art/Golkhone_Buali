#include "soil.h"


Soil::Soil()
{

}

void Soil::set_count(unsigned int count)
{
    this->count = count;
}

unsigned int Soil::get_count() const
{
    return count;
}

void Soil::inc_count()
{
    count++;
}

void Soil::dec_count()
{
    count--;
}
