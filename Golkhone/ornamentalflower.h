#ifndef ORNAMENTALFLOWER_H
#define ORNAMENTALFLOWER_H
#include <iostream>
#include "flower.h"
#include "ornamentalonion.h"

class OrnamentalFlower : public Flower
{
public:
    virtual void picking();
    virtual std::string get_name() const;
    virtual ~OrnamentalFlower();
    OrnamentalFlower(OrnamentalOnion *);
    OrnamentalFlower(const OrnamentalFlower &);
    static long int get_price();
    static void set_ornamentalFlower_count(unsigned int);
    static void inc_ornamentalFlower_count();
    static void dec_ornamentalFlower_count();
    static unsigned int get_ornamentalFlower_count();
private:
    const std::string name = "Ornamental Flower";
    OrnamentalOnion *ornamentalOnion;
    static unsigned int ornamentalFlower_count;
    static const long int return_price = 10000;
};

#endif // ORNAMENTALFLOWER_H


