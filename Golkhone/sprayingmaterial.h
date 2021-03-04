#ifndef SPRAYINGMATERIAL_H
#define SPRAYINGMATERIAL_H
#include <iostream>


class SprayingMaterial
{
public:
    SprayingMaterial();
    std::string get_name() const;
private:
    const std::string name = "Spraying Material";
};

#endif // SPRAYINGMATERIAL_H
