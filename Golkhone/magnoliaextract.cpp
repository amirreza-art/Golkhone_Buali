#include "magnoliaextract.h"

extern long int money;

MagnoliaExtract::MagnoliaExtract(Dahlia *dahlia, Tulip *tulip, Water *water)
{
    this->dahlia = dahlia;
    this->tulip = tulip;
    this->water = water;
}

MagnoliaExtract::~MagnoliaExtract()
{
    money -= Dahlia::get_price();
    Dahlia::inc_dahlia_count();

    money -= Tulip::get_price();
    Tulip::inc_tulip_count();

    delete  dahlia;
    delete  tulip;
    delete water;
}

std::string MagnoliaExtract::get_name() const
{
    return name;
}
