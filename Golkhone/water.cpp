#include "water.h"

void Water::operator=(const unsigned int &count)
{
    water_count = count;
}

Water::Water()
{

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
