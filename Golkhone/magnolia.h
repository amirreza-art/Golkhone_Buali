#ifndef MAGNOLIA_H
#define MAGNOLIA_H
#include "ornamentalflowerbud.h"
#include "magnoliaextract.h"

class Magnolia : public OrnamentalFlowerBud
{
public:
    virtual void picking();
    virtual std::string get_name() const;
    virtual ~Magnolia();
    Magnolia(OrnamentalFlowerBud *, MagnoliaExtract);
    static long int get_price();
    static void set_magnolia_count(unsigned int);
    static void inc_magnolia_count();
    static void dec_magnolia_count();
    static unsigned int get_magnolia_count();
private:
    const std::string name = "Magnolia";
    MagnoliaExtract magnoliaExtract;
    static unsigned int magnolia_count;
    static const long int selling_price = 30000;
};

#endif // MAGNOLIA_H



