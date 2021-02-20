#ifndef ORNAMENTALONION_H
#define ORNAMENTALONION_H
#include <iostream>


class OrnamentalOnion
{
public:
    OrnamentalOnion();
    void operator=(const unsigned int &);
private:
    std::string ornamentalOnion;
    unsigned int ornamentalOnion_count;
};

#endif // ORNAMENTALONION_H
