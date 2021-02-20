#ifndef RAREFLOWER_H
#define RAREFLOWER_H
#include <iostream>
#include "flower.h"
#include "rareonion.h"

class RareFlower : public Flower
{
public:
    RareFlower();
    RareFlower(RareOnion);
    static void set_rareFlower_count(unsigned int);
    static void inc_rareFlower_count();
    static void dec_rareFlower_count();
    static unsigned int get_rareFlower_count();
private:
    RareOnion rareOnion;
    static unsigned int rareFlower_count;

};

#endif // RAREFLOWER_H
