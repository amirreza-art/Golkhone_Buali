#include "soil.h"


Soil::Soil()
{

}

std::string Soil::get_name() const
{
    return name;
}

/*
template <>
int Soil<int>::soil_count = 450;

template <>
unsigned int Soil<unsigned int>::soil_count =10;


template <class T>
Soil<T>::Soil()
{

}

template class Soil<int>;
template class Soil<unsigned>;
*/
