#include "sprayingmaterial.h"

SprayingMaterial::SprayingMaterial()
{

}

void SprayingMaterial::operator=(const unsigned int &count)
{
    spraying_count = count;
}


/*
template<>
int Water<int>::water_count = 250;

template<>
unsigned int Water<unsigned int>::water_count = 0;


template <class T>
Water<T>::Water()
{

}
*/
//template class Water<int>;
//template class Water<unsigned int>;
