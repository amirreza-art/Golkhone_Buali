#include "ordinaryunion.h"

OrdinaryUnion::OrdinaryUnion()
{

}

void OrdinaryUnion::set_count(unsigned int count)
{
    this->count = count;
}

unsigned int OrdinaryUnion::get_count() const
{
    return count;
}

void OrdinaryUnion::inc_count()
{
    count++;
}

void OrdinaryUnion::dec_count()
{
    count--;
}
