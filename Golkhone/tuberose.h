#ifndef TUBEROSE_H
#define TUBEROSE_H
#include "rareflowerbuds.h"
#include "water.h"
#include "sprayingmaterial.h"

class Tuberose : public RareFlowerbuds
{
public:
    Tuberose();
    ~Tuberose();
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
    static const long int selling_price = 20000;
};

#endif // TUBEROSE_H
