#ifndef ORNAMENTALONION_H
#define ORNAMENTALONION_H
#include <iostream>


class OrnamentalOnion
{
public:
    OrnamentalOnion();
    void set_count(unsigned int);
    unsigned int get_count() const;
    void inc_count();
    void dec_count();
private:
    unsigned int count;
};

#endif // ORNAMENTALONION_H

