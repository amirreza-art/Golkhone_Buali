#ifndef FLOWER_H
#define FLOWER_H
#include <iostream>


class Flower
{
public:
    virtual void picking() = 0;
    virtual std::string get_name() const = 0;
    //Flower();
};

#endif // FLOWER_H
