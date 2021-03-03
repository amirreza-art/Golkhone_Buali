#ifndef ORDINARYFLOWERS_H
#define ORDINARYFLOWERS_H
#include <iostream>
#include "flower.h"
#include "ordinaryunion.h"

class OrdinaryFlowers : public Flower
{
public:
    virtual void picking();
    virtual std::string get_name() const;
    OrdinaryFlowers(OrdinaryUnion *);
    OrdinaryFlowers(const OrdinaryFlowers &);
    virtual ~OrdinaryFlowers();
    static long int get_price();
    static void set_ordinaryFlower_count(unsigned int);
    static void inc_ordinaryFlower_count();
    static void dec_ordinaryFlower_count();
    static unsigned int get_ordinaryFlower_count();
private:
    const std::string name = "Ordinary Flower";
    OrdinaryUnion *orUnion;
    static unsigned int ordinaryFlower_count;
    static const long int return_price = 500;
};

#endif // ORDINARYFLOWERS_H
