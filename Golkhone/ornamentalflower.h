#ifndef ORNAMENTALFLOWER_H
#define ORNAMENTALFLOWER_H
#include <iostream>
#include "flower.h"
#include "ornamentalonion.h"

class OrnamentalFlower : Flower
{
public:
    OrnamentalFlower();
    ~OrnamentalFlower();
    OrnamentalFlower(OrnamentalOnion);
    static long int get_price();
    static void set_ornamentalFlower_count(unsigned int);
    static void inc_ornamentalFlower_count();
    static void dec_ornamentalFlower_count();
    static unsigned int get_ornamentalFlower_count();
private:
    OrnamentalOnion ornamentalOnion;
    static unsigned int ornamentalFlower_count;
    static const long int return_price = 10000;
};

#endif // ORNAMENTALFLOWER_H


