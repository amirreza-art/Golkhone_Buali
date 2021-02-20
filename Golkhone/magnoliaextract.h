#ifndef MAGNOLIAEXTRACT_H
#define MAGNOLIAEXTRACT_H
#include <iostream>
#include "water.h"
#include "dahlia.h"
#include "tulip.h"

class MagnoliaExtract
{
public:
    MagnoliaExtract();
    MagnoliaExtract(Dahlia, Tulip, Water);
    void operator=(const unsigned int &);
private:
    //std::string m;
    Water water;
    Dahlia dahlia;
    Tulip tulip;
    unsigned int magnoliaExtract_count;
};

#endif // MAGNOLIAEXTRACT_H
