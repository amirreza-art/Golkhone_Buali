#include "person.h"
#include <cstring>

Person::Person()
{

}

void Person::set_name(std::string s)
{
    strcpy(name, s.c_str());
}

std::string Person::get_name() const
{
    return std::string(name);
}

void Person::set_flower(Flower *ptr)
{
    flowers.push_back(ptr);
}

/*
void Person::set_soil_count(unsigned int soil_count)
{
    this->soil_count = soil_count;
}

unsigned int Person::get_soil_count() const
{
    return soil_count;
}

void Person::set_water_count(unsigned int water_count)
{
    this->water_count = water_count;
}

unsigned int Person::get_water_count() const
{
    return water_count;
}

void Person::set_extract_count(unsigned int extract_count)
{
    this->extract_count = extract_count;
}

unsigned int Person::get_extract_count(unsigned int) const
{
    return extract_count;
}

void Person::set_spraying_count(unsigned int spraying_count)
{
    this->spraying_count = spraying_count;
}

unsigned int Person::get_spraying_count() const
{
    return spraying_count;
}

void Person::set_total_ordinary(unsigned int total_ordinary)
{
    this->total_ordinary = total_ordinary;
}

unsigned int Person::get_total_ordinary() const
{
    return total_ordinary;
}

void Person::set_total_ornamental(unsigned int total_ornamental)
{
    this->total_ornamental = total_ornamental;
}

unsigned int Person::get_total_ornamental() const
{
    return total_ornamental;
}

void Person::set_total_rare(unsigned int total_rare)
{
    this->total_rare = total_rare;
}

unsigned int Person::get_total_rare() const
{
    return total_rare;
}

void Person::set_total_flower_arranged(unsigned int total_flower_arranged)
{
    this->total_flower_arranged = total_flower_arranged;
}

unsigned int Person::get_total_flower_arranged() const
{
    return total_flower_arranged;
}

void Person::set_total_flower_planted(unsigned int total_flower_planted)
{
    this->total_flower_planted = total_flower_planted;
}

unsigned int Person::get_total_flower_planted() const
{
    return total_flower_planted;
}
*/
