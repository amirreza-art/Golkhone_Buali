#ifndef RAREONION_H
#define RAREONION_H
#include <iostream>

class RareOnion
{
public:
    RareOnion();
    void operator=(const unsigned int &);
private:
    std::string rareOnion;
    unsigned int rareOnion_count;
};


#endif // RAREONION_H
