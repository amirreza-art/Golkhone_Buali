#ifndef RAREFLOWERBUDS_H
#define RAREFLOWERBUDS_H
#include "rareflower.h"
#include "soil.h"
#include <iostream>


class RareFlowerbuds : public RareFlower
{
public:
    virtual void picking();
    virtual std::string get_name() const;
    RareFlowerbuds(RareFlower *, Soil *);
    RareFlowerbuds(const RareFlowerbuds &);
    virtual ~RareFlowerbuds();
    static long int get_price();
    static void set_rareFlowerBud_count(unsigned int);
    static void inc_rareFlowerBud_count();
    static void dec_rareFlowerBud_count();
    static unsigned int get_rareFlowerBud_count();
private:
    const std::string name = "Rare Flower Bud";
    Soil *soil;
    static unsigned int rareFlowerBud_count;
    static const long int return_price = 10000;
};

#endif // RAREFLOWERBUDS_H





