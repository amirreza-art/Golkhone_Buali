#ifndef WATER_H
#define WATER_H
#include <iostream>

//template <class T>
class Water
{
public:
    Water();
    std::string get_name() const;
private:
    const std::string name = "Water";
};

#endif // WATER_H
