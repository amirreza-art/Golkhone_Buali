#include "sprayingmaterial.h"

SprayingMaterial::SprayingMaterial()
{

}

void SprayingMaterial::set_count(unsigned int count)
{
    this->count = count;
}

unsigned int SprayingMaterial::get_count() const
{
    return count;
}

void SprayingMaterial::inc_count()
{
    count++;
}

void SprayingMaterial::dec_count()
{
    count--;
}

