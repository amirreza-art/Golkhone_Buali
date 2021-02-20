#ifndef DAHLIA_H
#define DAHLIA_H
#include "ordinaryflowerbuds.h"
#include "water.h"


class Dahlia : public OrdinaryFlowerBuds
{
public:
    Dahlia(OrdinaryFlowerBuds, Water);
    static void set_dahlia_count(unsigned int);
    static void inc_dahlia_count();
    static void dec_dahlia_count();
    static unsigned int get_dahlia_count();
private:
    OrdinaryFlowerBuds orBud;
    Water water;
    static unsigned int dahlia_count;
};

#endif // DAHLIA_H



