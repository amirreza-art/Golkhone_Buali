#include "person.h"
#include <cstring>
#include <stdexcept>

Person::Person()
{

}

void Person::set_flower(Flower *ptr)
{
    flowers.push_back(ptr);
}

Dahlia * Person::get_Dahlia()
{
    for (auto item : flowers)
    {
        if (item->get_name() == "Dahlia")
        {
            if (Dahlia::get_dahlia_count() == 0)
            {
                throw std::runtime_error("you should picking Dahlia first");
            }
            Dahlia::dec_dahlia_count();
            Dahlia *ptr = dynamic_cast<Dahlia *>(item);
            return ptr;
        }
    }
    throw std::runtime_error("you dont have any Dahlia");
}

Tulip * Person::get_Tulip()
{
    for (auto item : flowers)
    {
        if (item->get_name() == "Tulip")
        {
            if (Dahlia::get_dahlia_count() == 0)
            {
                throw std::runtime_error("you should picking Tulip first");
            }
            Tulip::dec_tulip_count();
            Tulip *ptr = dynamic_cast<Tulip *>(item);
            return ptr;
        }
    }
    throw std::runtime_error("you dont have any Tulip");
}

Amaryllis * Person::get_Amaryllis()
{
    for (auto item : flowers)
    {
        if (item->get_name() == "Amaryllis")
        {
            if (Dahlia::get_dahlia_count() == 0)
            {
                throw std::runtime_error("you should picking Amaryllis first");
            }
            Amaryllis::dec_Amaryllis_count();
            Amaryllis *ptr = dynamic_cast<Amaryllis *>(item);
            return ptr;
        }
    }
    throw std::runtime_error("you dont have any Amaryllis");
}

Tuberose * Person::get_Tuberose()
{
    for (auto item : flowers)
    {
        if (item->get_name() == "Tuberose")
        {
            if (Dahlia::get_dahlia_count() == 0)
            {
                throw std::runtime_error("you should picking Tuberose first");
            }
            Tuberose::dec_tuberose_count();
            Tuberose *ptr = dynamic_cast<Tuberose *>(item);
            return ptr;
        }
    }
    throw std::runtime_error("you dont have any Tuberose");
}

Hyacinth * Person::get_Hyacinth()
{
    for (auto item : flowers)
    {
        if (item->get_name() == "Hyacinth")
        {
            if (Dahlia::get_dahlia_count() == 0)
            {
                throw std::runtime_error("you should picking Hyacinth first");
            }
            Hyacinth::dec_hyacinth_count();
            Hyacinth *ptr = dynamic_cast<Hyacinth *>(item);
            return ptr;
        }
    }
    throw std::runtime_error("you dont have any Hyacinth");
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

unsigned int Person::get_OrchidExtract_count() const
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

Water * Person::get_Water()
{
    if (waters.empty())
    {
        throw std::runtime_error("you dont have enough Water!!");
    }

    Water *ptr = waters.back();
    waters.erase(waters.end() - 1);
    return ptr;
}

unsigned int Person::get_Water_count() const
{
    unsigned int temp = waters.size();
    return temp;
}

void Person::add_Water(Water *wptr)
{
    waters.push_back(wptr);
}

SprayingMaterial * Person::get_SprayingMaterial()
{
    if (sprayingMaterials.empty())
    {
        throw std::runtime_error("you dont have enough SprayingMaterial!!");
    }

    SprayingMaterial *ptr = sprayingMaterials.back();
    sprayingMaterials.erase(sprayingMaterials.end() - 1);
    return ptr;
}

unsigned int Person::get_SprayingMaterial_count() const
{
    unsigned int temp = sprayingMaterials.size();
    return temp;
}

void Person::add_SprayingMaterial(SprayingMaterial *smptr)
{
    sprayingMaterials.push_back(smptr);
}

OrdinaryUnion * Person::get_OrdinaryUnion()
{
    if (ordinaryUnions.empty())
    {
        throw std::runtime_error("you dont have enough OrdinaryUnion!!");
    }

    OrdinaryUnion *ptr = ordinaryUnions.back();
    ordinaryUnions.erase(ordinaryUnions.end() - 1);
    return ptr;
}

unsigned int Person::get_OrdinaryUnion_count() const
{
    unsigned int temp = ordinaryUnions.size();
    return temp;
}

void Person::add_OrdinaryUnion(OrdinaryUnion *ooptr)
{
    ordinaryUnions.push_back(ooptr);
}

OrnamentalOnion * Person::get_OrnamentalOnion()
{
    if (ornamentalOnions.empty())
    {
        throw std::runtime_error("you dont have enough OrnamentalOnion!!");
    }

    OrnamentalOnion *ptr = ornamentalOnions.back();
    ornamentalOnions.erase(ornamentalOnions.end() - 1);
    return ptr;
}

unsigned int Person::get_OrnamentalOnion_count() const
{
    unsigned int temp = ornamentalOnions.size();
    return temp;
}

void Person::add_OrnamentalOnion(OrnamentalOnion *ooptr)
{
    ornamentalOnions.push_back(ooptr);
}

RareOnion * Person::get_RareOnion()
{
    if (rareOnions.empty())
    {
        throw std::runtime_error("you dont have enough RareOnion!!");
    }

    RareOnion *ptr = rareOnions.back();
    rareOnions.erase(rareOnions.end() - 1);
    return ptr;
}

unsigned int Person::get_RareOnion_count() const
{
    unsigned int temp = rareOnions.size();
    return temp;
}

void Person::add_RareOnion(RareOnion *roptr)
{
    rareOnions.push_back(roptr);
}

Person::~Person()
{
    for (auto item : flowers)
    {
        delete item;
    }

    for (auto item : liliumExtracts)
    {
        delete item;
    }

    for (auto item : magnoliExtracts)
    {
        delete item;
    }

    for (auto item : orchidExtracts)
    {
        delete item;
    }

    for (auto item : soils)
    {
        delete item;
    }

    for (auto item : waters)
    {
        delete item;
    }

    for (auto item : sprayingMaterials)
    {
        delete item;
    }

    for (auto item : ordinaryUnions)
    {
        delete item;
    }

    for (auto item : ornamentalOnions)
    {
        delete item;
    }

    for (auto item : rareOnions)
    {
        delete item;
    }
}
