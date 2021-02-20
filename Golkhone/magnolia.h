#ifndef MAGNOLIA_H
#define MAGNOLIA_H
#include "ornamentalflowerbud.h"
#include "magnoliaextract.h"

class Magnolia : public OrnamentalFlowerBud
{
public:
    Magnolia();
    Magnolia(OrnamentalFlowerBud, MagnoliaExtract);
    static void set_magnolia_count(unsigned int);
    static void inc_magnolia_count();
    static void dec_magnolia_count();
    static unsigned int get_magnolia_count();
private:
    OrnamentalFlowerBud ornamentalFlowerBud;
    MagnoliaExtract magnoliaExtract;
    static unsigned int magnolia_count;
};

#endif // MAGNOLIA_H



