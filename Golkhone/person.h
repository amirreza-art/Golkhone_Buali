#ifndef PERSON_H
#define PERSON_H
#include "soil.h"
#include "water.h"
#include "liliumextract.h"
#include "magnoliaextract.h"
#include "orchisextract.h"
#include <iostream>


class Person
{
public:
    Person();
    void set_name(std::string);
    std::string get_name() const;
    void set_soil_count(unsigned int);
    unsigned int get_soil_count() const;
    void set_water_count(unsigned int);
    unsigned int get_water_count() const;
    void set_extract_count(unsigned int);
    unsigned int get_extract_count(unsigned int) const;
    void set_spraying_count(unsigned int);
    unsigned int get_spraying_count() const;
    void set_total_ordinary(unsigned int);
    unsigned int get_total_ordinary() const;
    void set_total_ornamental(unsigned int);
    unsigned int get_total_ornamental() const;
    void set_total_rare(unsigned int);
    unsigned int get_total_rare() const;
    void set_total_flower_arranged(unsigned int);
    unsigned int get_total_flower_arranged() const;
    void set_total_flower_planted(unsigned int);
    unsigned int get_total_flower_planted() const;
private:
    char name[50] = "Ali Alavi";
    unsigned int soil_count = 0, water_count = 0;
    unsigned int total_flower_planted = 0, total_flower_arranged = 0;
    unsigned int extract_count = 0, spraying_count = 0;
    unsigned int total_ordinary = 0;
    unsigned int total_ornamental = 0;
    unsigned int total_rare = 0;
    /*
    Water water;
    LiliumExtract liliumExtract;
    MagnoliaExtract magnoliaExtract;
    OrchisExtract orchisExtract;
    static Water water_count;
    static LiliumExtract liliumExtract_count;
    static MagnoliaExtract magnoliaExtract_count;
    static OrchisExtract orchidExtract_count;*/
};

#endif // PERSON_H
