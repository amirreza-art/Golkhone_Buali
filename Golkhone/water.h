#ifndef WATER_H
#define WATER_H
#include <iostream>

//template <class T>
class Water
{
public:
    Water();
    void set_count(unsigned int);
    unsigned int get_count() const;
    void inc_count();
    void dec_count();
    void operator=(const unsigned int &);
private:
    unsigned int count;
};

#endif // WATER_H
