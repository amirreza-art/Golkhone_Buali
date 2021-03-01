#ifndef AMARYLLIS_H
#define AMARYLLIS_H
#include "ordinaryflowerbuds.h"
#include "water.h"


class Amaryllis : public OrdinaryFlowerBuds
{
public:
    virtual void picking();
    Amaryllis(OrdinaryFlowerBuds, Water);
    Amaryllis();
    ~Amaryllis();
    static long int get_price();
    static void set_Amaryllis_count(unsigned int);
    static void inc_Amaryllis_count();
    static void dec_Amaryllis_count();
    static unsigned int get_Amaryllis_count();
private:
    OrdinaryFlowerBuds orBud;
    Water water;
    static unsigned int amaryllis_count;
    static const long int selling_price = 2000;
};



#endif // AMARYLLIS_H
