#include "hyacinth.h"

unsigned int Hyacinth::hyacinth_count = 0;

Hyacinth::Hyacinth(RareFlowerbuds rareBud, Water water)
{
    this->rareBud = rareBud;
    this->water = water;
}

Hyacinth::Hyacinth()
{

}

Hyacinth::Hyacinth(RareFlowerbuds rareBud, Water water, SprayingMaterial spraying)
{
    this->rareBud = rareBud;
    this->water = water;
    this->spraying = spraying;
}
void Hyacinth::set_hyacinth_count(unsigned int count)
{
    hyacinth_count = count;
}
void Hyacinth::inc_hyacinth_count()
{
    hyacinth_count++;
}
void Hyacinth::dec_hyacinth_count()
{
    hyacinth_count--;
}
unsigned int Hyacinth::get_hyacinth_count()
{
    return hyacinth_count;
}
