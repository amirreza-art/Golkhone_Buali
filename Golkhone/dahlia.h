#ifndef DAHLIA_H
#define DAHLIA_H
#include "ordinaryflowerbuds.h"
#include "water.h"


class Dahlia : public OrdinaryFlowerBuds
{
public:
    virtual void picking();
    Dahlia(OrdinaryFlowerBuds, Water);
    Dahlia();
    ~Dahlia();
    static long int get_price();
    static void set_dahlia_count(unsigned int);
    static void inc_dahlia_count();
    static void dec_dahlia_count();
    static unsigned int get_dahlia_count();
private:
    OrdinaryFlowerBuds orBud;
    Water water;
    static unsigned int dahlia_count;
    static const long int selling_price = 2000;
};

#endif // DAHLIA_H



