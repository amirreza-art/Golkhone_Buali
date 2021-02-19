#include "soil.h"

template <>
int Soil<int>::soil_count = 450;

template <>
unsigned int Soil<unsigned int>::soil_count = 0;


template <class T>
Soil<T>::Soil()
{

}

template class Soil<int>;
template class Soil<unsigned>;
