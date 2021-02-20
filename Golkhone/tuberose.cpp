#include "tuberose.h"

unsigned int Tuberose::tuberose_count = 0;

Tuberose::Tuberose(RareFlowerbuds rareBud, Water water)
{
    this->rareBud = rareBud;
    this->water = water;
}

Tuberose::Tuberose()
{

}

Tuberose::Tuberose(RareFlowerbuds rareBud, Water water, SprayingMaterial spraying)
{
    this->rareBud = rareBud;
    this->water = water;
    this->spraying = spraying;
}
void Tuberose::set_tuberose_count(unsigned int count)
{
    tuberose_count = count;
}
void Tuberose::inc_tuberose_count()
{
    tuberose_count++;
}
void Tuberose::dec_tuberose_count()
{
    tuberose_count--;
}
unsigned int Tuberose::get_tuberose_count()
{
    return tuberose_count;
}
