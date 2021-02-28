#ifndef ORDINARYUNION_H
#define ORDINARYUNION_H
#include <iostream>

class OrdinaryUnion
{
public:
    OrdinaryUnion();
    void set_count(unsigned int);
    unsigned int get_count() const;
    void inc_count();
    void dec_count();
private:
    unsigned int count;
};

#endif // ORDINARYUNION_H

