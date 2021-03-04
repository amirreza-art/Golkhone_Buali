#ifndef ORCHISEXTRACT_H
#define ORCHISEXTRACT_H
#include "water.h"
#include "hyacinth.h"


class OrchisExtract
{
public:
    OrchisExtract(Hyacinth *, Water *);
    ~OrchisExtract();
    std::string get_name() const;
private:
    const std::string name = "Orchid Extract";
    Water *water;
    Hyacinth *hyacinth;
};

#endif // ORCHISEXTRACT_H
