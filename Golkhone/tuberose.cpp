#include "tuberose.h"

extern long int money;

unsigned int Tuberose::tuberose_count = 0;

Tuberose::Tuberose(RareFlowerbuds rareBud, Water water)
{
    this->rareBud = rareBud;
    this->water = water;
}

Tuberose::Tuberose()
{

}

Tuberose::~Tuberose()
{
    money = money + selling_price - RareFlowerbuds::get_price();
    dec_tuberose_count();
}

long int Tuberose::get_price()
{
    return selling_price;
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
