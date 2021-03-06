#ifndef TULIP_H
#define TULIP_H
#include "rareflowerbuds.h"
#include "water.h"
#include "sprayingmaterial.h"

class Tulip : public RareFlowerbuds
{
public:
    virtual void picking();
    virtual std::string get_name() const;
    virtual ~Tulip();
    Tulip(RareFlowerbuds *, Water *);
    Tulip(RareFlowerbuds *, Water *, SprayingMaterial *);
    static long int get_price();
    static void set_tulip_count(unsigned int);
    static void inc_tulip_count();
    static void dec_tulip_count();
    static unsigned int get_tulip_count();
private:
    const std::string name = "Tulip";
    Water *water;
    SprayingMaterial *spraying;
    static unsigned int tulip_count;
    static const long int selling_price = 20000;
};

#endif // TULIP_H
