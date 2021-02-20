#ifndef AMARYLLIS_H
#define AMARYLLIS_H
#include "ordinaryflowerbuds.h"
#include "water.h"


class Amaryllis : public OrdinaryFlowerBuds
{
public:
    Amaryllis(OrdinaryFlowerBuds, Water);
    static void set_Amaryllis_count(unsigned int);
    static void inc_Amaryllis_count();
    static void dec_Amaryllis_count();
    static unsigned int get_Amaryllis_count();
private:
    OrdinaryFlowerBuds orBud;
    Water water;
    static unsigned int amaryllis_count;
};



#endif // AMARYLLIS_H
