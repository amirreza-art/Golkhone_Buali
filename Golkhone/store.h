#ifndef STORE_H
#define STORE_H
#include <iostream>
#include <vector>
#include <soil.h>
#include <water.h>
#include <sprayingmaterial.h>
#include <ordinaryunion.h>
#include <ornamentalonion.h>
#include <rareonion.h>


class Store
{
public:
    Store();
    ~Store();
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
    std::vector<Soil *> soils;
    std::vector<Water *> waters;
    std::vector<SprayingMaterial *> sprayingMaterials;
    std::vector<OrdinaryUnion *> ordinaryUnions;
    std::vector<OrnamentalOnion *> ornamentalOnions;
    std::vector<RareOnion *> rareOnions;
};

#endif // STORE_H
