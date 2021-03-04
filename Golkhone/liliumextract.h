#ifndef LILIUMEXTRACT_H
#define LILIUMEXTRACT_H
#include "tuberose.h"
#include "amaryllis.h"
#include "water.h"


class LiliumExtract
{
public:
    LiliumExtract(Tuberose *, Amaryllis *, Water *);
    std::string get_name() const;
    ~LiliumExtract();
private:
    const std::string name = "Lilium Extract";
    Water *water;
    Amaryllis *amaryllis;
    Tuberose *tuberose;
};

#endif // LILIUMEXTRACT_H
