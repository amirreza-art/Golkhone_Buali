#ifndef MAGNOLIAEXTRACT_H
#define MAGNOLIAEXTRACT_H
#include <iostream>
#include "water.h"
#include "dahlia.h"
#include "tulip.h"

class MagnoliaExtract
{
public:
    ~MagnoliaExtract();
    MagnoliaExtract(Dahlia *, Tulip *, Water *);
    std::string get_name() const;
private:
    const std::string name = "Magnolia Extract";
    Water *water;
    Dahlia *dahlia;
    Tulip *tulip;
};

#endif // MAGNOLIAEXTRACT_H
