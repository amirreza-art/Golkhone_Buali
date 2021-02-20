#include "orchisextract.h"
#include <stdexcept>

extern long int money;

OrchisExtract::OrchisExtract()
{

}
void OrchisExtract::operator=(const unsigned int &count)
{
    orchidsExtract_count = count;
}

OrchisExtract::OrchisExtract(Hyacinth hyacinth, Water water)
{
    if (money < 50000)
    {
        throw std::runtime_error("sory!! you dont have enough money");
    }
    money -= 50000;
    this->hyacinth = hyacinth;
    this->water = water;
}
