#ifndef LILIUM_H
#define LILIUM_H
#include "ornamentalflowerbud.h"
#include "liliumextract.h"

class Lilium : public OrnamentalFlowerBud
{
public:
    virtual void picking();
    virtual ~Lilium();
    Lilium(OrnamentalFlowerBud *, LiliumExtract);
    static long int get_price();
    static void set_lilium_count(unsigned int);
    static void inc_lilium_count();
    static void dec_lilium_count();
    static unsigned int get_lilium_count();
private:
    LiliumExtract liliumExtract;
    static unsigned int lilium_count;
    static const long int selling_price = 30000;
};

#endif // LILIUM_H
