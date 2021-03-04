#include "orchisextract.h"
#include <stdexcept>

extern long int money;

OrchisExtract::OrchisExtract(Hyacinth *hyacinth, Water *water)
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
    money -= Hyacinth::get_price();
    Hyacinth::inc_hyacinth_count();

    delete hyacinth;
    delete water;
}

std::string OrchisExtract::get_name() const
{
    return name;
}
