#ifndef ORDINARYUNION_H
#define ORDINARYUNION_H
#include <iostream>

class OrdinaryUnion
{
public:
    OrdinaryUnion();
    std::string get_name() const;
private:
    const std::string name = "Ordinary Onion";
};

#endif // ORDINARYUNION_H

