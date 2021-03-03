#ifndef ORNAMENTALFLOWERBUD_H
#define ORNAMENTALFLOWERBUD_H
#include "ornamentalbud.h"
#include "water.h"

class OrnamentalFlowerBud : public OrnamentalBud
{
public:
    virtual void picking();
    virtual std::string get_name() const;
    OrnamentalFlowerBud(const OrnamentalFlowerBud &);
    virtual ~OrnamentalFlowerBud();
    OrnamentalFlowerBud(OrnamentalBud *, Water);
    static long int get_price();
    static void set_ornamentalFlowerBud_count(unsigned int);
    static void inc_ornamentalFlowerBud_count();
    static void dec_ornamentalFlowerBud_count();
    static unsigned int get_ornamentalFlowerBud_count();
private:
    const std::string name = "Ornamental Flower Bud";
    Water water;
    static unsigned int ornamentalFlowerBud_count;
    static const long int return_price = 10000;
};

#endif // ORNAMENTALFLOWERBUD_H
