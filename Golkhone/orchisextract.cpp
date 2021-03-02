#include "orchisextract.h"
#include <stdexcept>

extern long int money;

void OrchisExtract::operator=(const unsigned int &count)
{
    orchidsExtract_count = count;
}

OrchisExtract::OrchisExtract(Hyacinth *hyacinth, Water water)
{
    if (money < 5000)
    {
        throw std::runtime_error("sory!! you dont have enough money");
    }
    money -= 5000;
    this->hyacinth = hyacinth;
    this->water = water;
}
// bara delet logical tedad dasti kam kon
OrchisExtract::~OrchisExtract()
{
    money = money - Hyacinth::get_price() + RareFlowerbuds::get_price();
    Hyacinth::inc_hyacinth_count();
    delete hyacinth;
}

