#ifndef ORNAMENTALFLOWER_H
#define ORNAMENTALFLOWER_H
#include <iostream>
#include "flower.h"
#include "ornamentalonion.h"

class OrnamentalFlower : Flower
{
public:
    OrnamentalFlower();
    OrnamentalFlower(OrnamentalOnion);
    static void set_ornamentalFlower_count(unsigned int);
    static void inc_ornamentalFlower_count();
    static void dec_ornamentalFlower_count();
    static unsigned int get_ornamentalFlower_count();
private:
    OrnamentalOnion ornamentalOnion;
    static unsigned int ornamentalFlower_count;

};

#endif // ORNAMENTALFLOWER_H


