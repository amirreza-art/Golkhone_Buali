#ifndef SOIL_H
#define SOIL_H
#include <iostream>

template <class T>
class Soil
{
public:
    Soil();
private:
    std::string soil;
    static T soil_count;
};

#endif // SOIL_H
