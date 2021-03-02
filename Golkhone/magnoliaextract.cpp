#include "magnoliaextract.h"

extern long int money;

void MagnoliaExtract::operator=(const unsigned int &count)
{
    magnoliaExtract_count = count;
}

MagnoliaExtract::MagnoliaExtract(Dahlia *dahlia, Tulip *tulip, Water water)
{
    this->dahlia = dahlia;
    this->tulip = tulip;
    this->water = water;
}

MagnoliaExtract::~MagnoliaExtract()
{
    money -= Dahlia::get_price();
    Dahlia::dec_dahlia_count();

    money -= Tulip::get_price();
    Tulip::dec_tulip_count();

    delete  dahlia;
    delete  tulip;
}
