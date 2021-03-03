#ifndef ORCHIS_H
#define ORCHIS_H
#include "ornamentalflowerbud.h"
#include "orchisextract.h"

class Orchid : public OrnamentalFlowerBud
{
public:
    virtual void picking();
    virtual std::string get_name() const;
    virtual ~Orchid();
    Orchid(OrnamentalFlowerBud *, OrchisExtract *);
    static long int get_price();
    static void set_orchid_count(unsigned int);
    static void inc_orchid_count();
    static void dec_orchid_count();
    static unsigned int get_orchid_count();
private:
    const std::string name = "Orchid";
    OrchisExtract *orchidExtract;
    static unsigned int orchid_count;
    static const long int selling_price = 30000;
};

#endif // ORCHIS_H
