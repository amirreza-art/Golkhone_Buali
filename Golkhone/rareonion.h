#ifndef RAREONION_H
#define RAREONION_H
#include <iostream>

class RareOnion
{
public:
    RareOnion();
    std::string get_name() const;
private:
    const std::string name = "Rare Onion";
};


#endif // RAREONION_H
