#ifndef HYACINTH_H
#define HYACINTH_H
#include "rareflowerbuds.h"
#include "water.h"
#include "sprayingmaterial.h"

class Hyacinth : public RareFlowerbuds
{
public:
    virtual void picking();
    virtual ~Hyacinth();
    Hyacinth(RareFlowerbuds *, Water);
    Hyacinth(RareFlowerbuds *, Water, SprayingMaterial);
    static long int get_price();
    static void set_hyacinth_count(unsigned int);
    static void inc_hyacinth_count();
    static void dec_hyacinth_count();
    static unsigned int get_hyacinth_count();
private:
    Water water;
    SprayingMaterial spraying;
    static unsigned int hyacinth_count;
    static const long int selling_price = 20000;
};

#endif // HYACINTH_H

