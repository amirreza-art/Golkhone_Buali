#ifndef ORDINARYUNION_H
#define ORDINARYUNION_H
#include <iostream>

class OrdinaryUnion
{
public:
    OrdinaryUnion();
    std::string getOrdinaryUnion();
    void operator=(const unsigned int &);
private:
    std::string ordinaryUnion;
    unsigned int ordinaryUnion_count;
    //static T water_count;
};

#endif // ORDINARYUNION_H
