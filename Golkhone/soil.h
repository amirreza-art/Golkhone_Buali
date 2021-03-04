#ifndef SOIL_H
#define SOIL_H
#include <iostream>


class Soil
{
public:
    Soil();
    std::string get_name() const;
private:
    const std::string name = "Soil";
};

#endif // SOIL_H
