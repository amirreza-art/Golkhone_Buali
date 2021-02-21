#ifndef ORNAMENTALFLOWERBUD_H
#define ORNAMENTALFLOWERBUD_H
#include "ornamentalbud.h"
#include "water.h"

class OrnamentalFlowerBud : public OrnamentalBud
{
public:
    OrnamentalFlowerBud();
    ~OrnamentalFlowerBud();
    OrnamentalFlowerBud(OrnamentalBud, Water);
    static void set_ornamentalFlowerBud_count(unsigned int);
    static void inc_ornamentalFlowerBud_count();
    static void dec_ornamentalFlowerBud_count();
    static unsigned int get_ornamentalFlowerBud_count();
private:
    OrnamentalBud ornamentalBud;
    Water water;
    static unsigned int ornamentalFlowerBud_count;
    static const long int return_price = 10000;
};

#endif // ORNAMENTALFLOWERBUD_H
