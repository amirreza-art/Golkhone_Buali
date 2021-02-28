#ifndef RAREFLOWER_H
#define RAREFLOWER_H
#include <iostream>
#include "flower.h"
#include "rareonion.h"

class RareFlower : public Flower
{
public:
    RareFlower();
    ~RareFlower();
    RareFlower(RareOnion);
    static long int get_price();
    static void set_rareFlower_count(unsigned int);
    static void inc_rareFlower_count();
    static void dec_rareFlower_count();
    static unsigned int get_rareFlower_count();
private:
    RareOnion rareOnion;
    static unsigned int rareFlower_count;
    static const long int return_price = 5000;
};

#endif // RAREFLOWER_H
