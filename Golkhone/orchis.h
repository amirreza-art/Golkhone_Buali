#ifndef ORCHIS_H
#define ORCHIS_H
#include "ornamentalflowerbud.h"
#include "orchisextract.h"

class Orchid : public OrnamentalFlowerBud
{
public:
    Orchid();
    ~Orchid();
    Orchid(OrnamentalFlowerBud, OrchisExtract);
    static void set_orchid_count(unsigned int);
    static void inc_orchid_count();
    static void dec_orchid_count();
    static unsigned int get_orchid_count();
private:
    OrnamentalFlowerBud ornamentalFlowerBud;
    OrchisExtract orchisExtract;
    static unsigned int orchid_count;
    static const long int selling_price = 30000;
};

#endif // ORCHIS_H
