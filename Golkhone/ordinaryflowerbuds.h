#ifndef ORDINARYFLOWERBUDS_H
#define ORDINARYFLOWERBUDS_H
#include <ordinaryflowers.h>
#include <iostream>


class OrdinaryFlowerBuds : public OrdinaryFlowers
{
public:
    OrdinaryFlowerBuds(OrdinaryFlowers);
    OrdinaryFlowerBuds();
    static void set_ordinaryFlowerBud_count(unsigned int);
    static void inc_ordinaryFlowerBud_count();
    static void dec_ordinaryFlowerBud_count();
    static unsigned int get_ordinaryFlowerBud_count();
private:
    OrdinaryFlowers orFlower;
    static unsigned int ordinaryFlowerBud_count;
};

#endif // ORDINARYFLOWERBUDS_H
