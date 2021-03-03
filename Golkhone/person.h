#ifndef PERSON_H
#define PERSON_H
#include "soil.h"
#include "water.h"
#include "liliumextract.h"
#include "magnoliaextract.h"
#include "orchisextract.h"
#include <iostream>
#include "flower.h"
#include <vector>



class Person
{
public:
    Person();
    void set_name(std::string);
    std::string get_name() const;
    void set_flower(Flower *);
    MagnoliaExtract * get_MagnoliaExtract();
    LiliumExtract * get_LiliumExtract();
    OrchisExtract * get_OrchidExtract();
    unsigned int get_MagnoliaExtract_count() const;
    unsigned int get_LiliumExtract_count() const;
    unsigned int get_OrchidExtract() const;
    void add_MagnoliaExtract(MagnoliaExtract *);
    void add_LiliumExtract(LiliumExtract *);
    void add_OrchidExtract(OrchisExtract *);
    Soil * get_Soil();
    unsigned int get_Soil_count() const;
    void add_Soil(Soil *);
private:
    char name[50] = "Ali Alavi";
    std::vector<Flower *> flowers;
    std::vector<MagnoliaExtract *> magnoliExtracts;
    std::vector<LiliumExtract *> liliumExtracts;
    std::vector<OrchisExtract *> orchidExtracts;
    std::vector<Soil *> soils;
};

#endif // PERSON_H
