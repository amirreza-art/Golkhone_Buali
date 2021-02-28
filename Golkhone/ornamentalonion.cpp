#include "ornamentalonion.h"

OrnamentalOnion::OrnamentalOnion()
{

}

void OrnamentalOnion::set_count(unsigned int count)
{
    this->count = count;
}

unsigned int OrnamentalOnion::get_count() const
{
    return count;
}

void OrnamentalOnion::inc_count()
{
    count++;
}

void OrnamentalOnion::dec_count()
{
    count--;
}

