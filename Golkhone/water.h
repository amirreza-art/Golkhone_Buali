#ifndef WATER_H
#define WATER_H
#include <iostream>

//template <class T>
class Water
{
public:
    Water();
    std::string getWater();
    void operator=(const unsigned int &);
private:
    std::string water;
    unsigned int water_count;
    //static T water_count;
};

#endif // WATER_H
