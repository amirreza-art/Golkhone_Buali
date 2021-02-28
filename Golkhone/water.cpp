#include "water.h"

Water::Water()
{

}

void Water::set_count(unsigned int count)
{
    this->count = count;
}

unsigned int Water::get_count() const
{
    return count;
}

void Water::inc_count()
{
    count++;
}

void Water::dec_count()
{
    count--;
}
