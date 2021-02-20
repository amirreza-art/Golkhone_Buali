#ifndef LILIUM_H
#define LILIUM_H
#include "ornamentalflowerbud.h"
#include "liliumextract.h"

class Lilium : public OrnamentalFlowerBud
{
public:
    Lilium();
    Lilium(OrnamentalFlowerBud, LiliumExtract);
    static void set_lilium_count(unsigned int);
    static void inc_lilium_count();
    static void dec_lilium_count();
    static unsigned int get_lilium_count();
private:
    OrnamentalFlowerBud ornamentalFlowerBud;
    LiliumExtract liliumExtract;
    static unsigned int lilium_count;
};

#endif // LILIUM_H
