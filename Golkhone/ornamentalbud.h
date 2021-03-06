#ifndef ORNAMENTALBUD_H
#define ORNAMENTALBUD_H
#include "ornamentalflower.h"
#include "soil.h"
#include <iostream>


class OrnamentalBud : public OrnamentalFlower
{
public:
    virtual void picking();
    virtual std::string get_name() const;
    OrnamentalBud(const OrnamentalBud &);
    virtual ~OrnamentalBud();
    OrnamentalBud(OrnamentalFlower *, Soil *);
    static long int get_price();
    static void set_ornamentalBud_count(unsigned int);
    static void inc_ornamentalBud_count();
    static void dec_ornamentalBud_count();
    static unsigned int get_ornamentalBud_count();
private:
    const std::string name = "Ornamental Bud";
    Soil *soil;
    static unsigned int ornamentalBud_count;
    static const long int return_price = 10000;
};

#endif // ORNAMENTALBUD_H
