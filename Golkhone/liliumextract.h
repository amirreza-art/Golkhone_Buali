#ifndef LILIUMEXTRACT_H
#define LILIUMEXTRACT_H
#include "tuberose.h"
#include "amaryllis.h"
#include "water.h"


class LiliumExtract
{
public:
    LiliumExtract(Tuberose *, Amaryllis *, Water);
    ~LiliumExtract();
    void operator=(const unsigned int &);
private:
    //std::string m;
    Water water;
    Amaryllis *amaryllis;
    Tuberose *tuberose;
    unsigned int liliumExtract_count;
};

#endif // LILIUMEXTRACT_H
