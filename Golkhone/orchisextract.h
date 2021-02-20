#ifndef ORCHISEXTRACT_H
#define ORCHISEXTRACT_H
#include "water.h"
#include "hyacinth.h"


class OrchisExtract
{
public:
    OrchisExtract();
    OrchisExtract(Hyacinth, Water);
    void operator=(const unsigned int &);
private:
    //std::string m;
    Water water;
    Hyacinth hyacinth;
    unsigned int orchidsExtract_count;
};

#endif // ORCHISEXTRACT_H