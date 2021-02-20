#ifndef HYACINTH_H
#define HYACINTH_H
#include "rareflowerbuds.h"
#include "water.h"
#include "sprayingmaterial.h"

class Hyacinth : public RareFlowerbuds
{
public:
    Hyacinth();
    Hyacinth(RareFlowerbuds, Water);
    Hyacinth(RareFlowerbuds, Water, SprayingMaterial);
    static void set_hyacinth_count(unsigned int);
    static void inc_hyacinth_count();
    static void dec_hyacinth_count();
    static unsigned int get_hyacinth_count();
private:
    RareFlowerbuds rareBud;
    Water water;
    SprayingMaterial spraying;
    static unsigned int hyacinth_count;
};

#endif // HYACINTH_H

