#ifndef TUBEROSE_H
#define TUBEROSE_H
#include "rareflowerbuds.h"
#include "water.h"
#include "sprayingmaterial.h"

class Tuberose : public RareFlowerbuds
{
public:
    Tuberose();
    Tuberose(RareFlowerbuds, Water);
    Tuberose(RareFlowerbuds, Water, SprayingMaterial);
    static void set_tuberose_count(unsigned int);
    static void inc_tuberose_count();
    static void dec_tuberose_count();
    static unsigned int get_tuberose_count();
private:
    RareFlowerbuds rareBud;
    Water water;
    SprayingMaterial spraying;
    static unsigned int tuberose_count;
};

#endif // TUBEROSE_H
