#include "soil.h"


Soil::Soil()
{

}

void Soil::set_count(unsigned int count)
{
    this->count = count;
}

unsigned int Soil::get_count() const
{
    return count;
}

void Soil::inc_count()
{
    count++;
}

void Soil::dec_count()
{
    count--;
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
