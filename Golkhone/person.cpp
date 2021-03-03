#include "person.h"
#include <cstring>
#include <stdexcept>

Person::Person()
{

}

MagnoliaExtract * Person::get_MagnoliaExtract()
{
    if (magnoliExtracts.empty())
    {
        throw std::runtime_error("you dont have enough Magnolia Extract!!");
    }

    MagnoliaExtract *ptr = magnoliExtracts.back();
    magnoliExtracts.erase(magnoliExtracts.end() - 1);
    return ptr;
}

LiliumExtract * Person::get_LiliumExtract()
{
    if (liliumExtracts.empty())
    {
        throw  std::runtime_error("you dont have enough Lilium Extract!!");
    }

    LiliumExtract *ptr = liliumExtracts.back();
    liliumExtracts.erase(liliumExtracts.end() - 1);
    return ptr;
}

OrchisExtract * Person::get_OrchidExtract()
{
    if (orchidExtracts.empty())
    {
        throw std::runtime_error("you dont have enough Orchid Extract!!");
    }

    OrchisExtract *ptr = orchidExtracts.back();
    orchidExtracts.erase(orchidExtracts.end() - 1);
    return ptr;
}

void Person::set_name(std::string s)
{
    strcpy(name, s.c_str());
}

std::string Person::get_name() const
{
    return std::string(name);
}

void Person::set_flower(Flower *ptr)
{
    flowers.push_back(ptr);
}

unsigned int Person::get_MagnoliaExtract_count() const
{
    unsigned int temp = magnoliExtracts.size();
    return temp;
}

unsigned int Person::get_LiliumExtract_count() const
{
    unsigned int temp = liliumExtracts.size();
    return temp;
}

unsigned int Person::get_OrchidExtract() const
{
    unsigned int temp = orchidExtracts.size();
    return temp;
}

void Person::add_MagnoliaExtract(MagnoliaExtract *exptr)
{
    magnoliExtracts.push_back(exptr);
}

void Person::add_LiliumExtract(LiliumExtract *exptr)
{
    liliumExtracts.push_back(exptr);
}

void Person::add_OrchidExtract(OrchisExtract *exptr)
{
    orchidExtracts.push_back(exptr);
}

Soil * Person::get_Soil()
{
    if (soils.empty())
    {
        throw std::runtime_error("you dont have enough Soil!!");
    }

    Soil *ptr = soils.back();
    soils.erase(soils.end() - 1);
    return ptr;
}

unsigned int Person::get_Soil_count() const
{
    unsigned int temp = soils.size();
    return temp;
}

void Person::add_Soil(Soil *sptr)
{
    soils.push_back(sptr);
}

