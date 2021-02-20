#include "magnoliaextract.h"

void MagnoliaExtract::operator=(const unsigned int &count)
{
    magnoliaExtract_count = count;
}

MagnoliaExtract::MagnoliaExtract()
{

}

MagnoliaExtract::MagnoliaExtract(Dahlia dahlia, Tulip tulip, Water water)
{
    this->dahlia = dahlia;
    this->tulip = tulip;
    this->water = water;
}
