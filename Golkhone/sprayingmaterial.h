#ifndef SPRAYINGMATERIAL_H
#define SPRAYINGMATERIAL_H
#include <iostream>


class SprayingMaterial
{
public:
    SprayingMaterial();
    void set_count(unsigned int);
    unsigned int get_count() const;
    void inc_count();
    void dec_count();
private:
    std::string spraying;
    unsigned int count;
};

#endif // SPRAYINGMATERIAL_H
