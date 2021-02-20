#ifndef TULIP_H
#define TULIP_H
#include "rareflowerbuds.h"
#include "water.h"
#include "sprayingmaterial.h"

class Tulip : public RareFlowerbuds
{
public:
    Tulip(RareFlowerbuds, Water);
    Tulip(RareFlowerbuds, Water, SprayingMaterial);
    static void set_tulip_count(unsigned int);
    static void inc_tulip_count();
    static void dec_tulip_count();
    static unsigned int get_tulip_count();
private:
    RareFlowerbuds rareBud;
    Water water;
    SprayingMaterial spraying;
    static unsigned int tulip_count;
};

#endif // TULIP_H
