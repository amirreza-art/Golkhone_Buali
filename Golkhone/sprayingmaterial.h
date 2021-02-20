#ifndef SPRAYINGMATERIAL_H
#define SPRAYINGMATERIAL_H
#include <iostream>


class SprayingMaterial
{
public:
    SprayingMaterial();
     void operator=(const unsigned int &);
private:
     std::string spraying;
     unsigned int spraying_count;
};

#endif // SPRAYINGMATERIAL_H
