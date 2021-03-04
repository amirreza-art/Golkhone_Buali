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
#include "sprayingmaterial.h"
#include "ordinaryunion.h"
#include "rareonion.h"
#include "ornamentalonion.h"


class Person
{
public:
    Person();
    ~Person();
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
    Water * get_Water();
    unsigned int get_Water_count() const;
    void add_Water(Water *);
    SprayingMaterial * get_SprayingMaterial();
    unsigned int get_SprayingMaterial_count() const;
    void add_SprayingMaterial(SprayingMaterial *);
    OrdinaryUnion * get_OrdinaryUnion();
    unsigned int get_OrdinaryUnion_count() const;
    void add_OrdinaryUnion(OrdinaryUnion *);
    OrnamentalOnion * get_OrnamentalOnion();
    unsigned int get_OrnamentalOnion_count() const;
    void add_OrnamentalOnion(OrnamentalOnion *);
    RareOnion * get_RareOnion();
    unsigned int get_RareOnion_count() const;
    void add_RareOnion(RareOnion *);
private:
    char name[50] = "Ali Alavi";
    std::vector<Flower *> flowers;
    std::vector<MagnoliaExtract *> magnoliExtracts;
    std::vector<LiliumExtract *> liliumExtracts;
    std::vector<OrchisExtract *> orchidExtracts;
    std::vector<Soil *> soils;
    std::vector<Water *> waters;
    std::vector<SprayingMaterial *> sprayingMaterials;
    std::vector<OrdinaryUnion *> ordinaryUnions;
    std::vector<OrnamentalOnion *> ornamentalOnions;
    std::vector<RareOnion *> rareOnions;
};

#endif // PERSON_H
