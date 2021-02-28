#ifndef SOIL_H
#define SOIL_H
#include <iostream>


class Soil
{
public:
    Soil();
    Soil(unsigned int);
    void set_count(unsigned int);
    unsigned int get_count() const;
    void inc_count();
    void dec_count();
private:
    unsigned int count;
};

#endif // SOIL_H
