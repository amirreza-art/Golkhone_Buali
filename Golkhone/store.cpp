#include "store.h"
#include <stdexcept>

extern long int money;

Store::Store()
{

}

Soil * Store::get_Soil()
{
    if (soils.empty())
    {
        throw std::runtime_error("Soils are not available!!!");
    }

    if (money < 1000)
    {
        throw std::runtime_error("You dont have enough money!");
    }
    money -= 1000;

    Soil *ptr = soils.back();
    soils.erase(soils.end() - 1);
    return ptr;
}

unsigned int Store::get_Soil_count() const
{
    unsigned int temp = soils.size();
    return temp;
}

void Store::add_Soil(Soil *ptr)
{
    soils.push_back(ptr);
}

Water * Store::get_Water()
{
    if (soils.empty())
    {
        throw std::runtime_error("Waters are not available!!!");
    }

    if (money < 1000)
    {
        throw std::runtime_error("You dont have enough money!");
    }
    money -= 1000;

    Water *ptr = waters.back();
    waters.erase(waters.end() - 1);
    return ptr;
}

unsigned int Store::get_Water_count() const
{
    unsigned int temp = waters.size();
    return temp;
}

void Store::add_Water(Water *ptr)
{
    waters.push_back(ptr);
}

SprayingMaterial * Store::get_SprayingMaterial()
{
    if (soils.empty())
    {
        throw std::runtime_error("SprayingMaterials are not available!!!");
    }

    if (money < 5000)
    {
        throw std::runtime_error("You dont have enough money!");
    }
    money -= 5000;

    SprayingMaterial *ptr = sprayingMaterials.back();
    sprayingMaterials.erase(sprayingMaterials.end() - 1);
    return ptr;
}

unsigned int Store::get_SprayingMaterial_count() const
{
    unsigned int temp = sprayingMaterials.size();
    return temp;
}

void Store::add_SprayingMaterial(SprayingMaterial *ptr)
{
    sprayingMaterials.push_back(ptr);
}

OrdinaryUnion * Store::get_OrdinaryUnion()
{
    if (soils.empty())
    {
        throw std::runtime_error("OrdinaryUnions are not available!!!");
    }

    if (money < 1000)
    {
        throw std::runtime_error("You dont have enough money!");
    }
    money -= 1000;

    OrdinaryUnion *ptr = ordinaryUnions.back();
    ordinaryUnions.erase(ordinaryUnions.end() - 1);
    return ptr;
}

unsigned int Store::get_OrdinaryUnion_count() const
{
    unsigned int temp = ordinaryUnions.size();
    return temp;
}

void Store::add_OrdinaryUnion(OrdinaryUnion *ptr)
{
    ordinaryUnions.push_back(ptr);
}

OrnamentalOnion * Store::get_OrnamentalOnion()
{
    if (soils.empty())
    {
        throw std::runtime_error("OrnamentalOnions are not available!!!");
    }

    if (money < 15000)
    {
        throw std::runtime_error("You dont have enough money!");
    }
    money -= 15000;

    OrnamentalOnion *ptr = ornamentalOnions.back();
    ornamentalOnions.erase(ornamentalOnions.end() - 1);
    return ptr;
}

unsigned int Store::get_OrnamentalOnion_count() const
{
    unsigned int temp = ornamentalOnions.size();
    return temp;
}

void Store::add_OrnamentalOnion(OrnamentalOnion *ptr)
{
    ornamentalOnions.push_back(ptr);
}

RareOnion * Store::get_RareOnion()
{
    if (rareOnions.empty())
    {
        throw std::runtime_error("RareOnions are not available!!!");
    }

    if (money < 10000)
    {
        throw std::runtime_error("You dont have enough money!");
    }
    money -= 10000;

    RareOnion *ptr = rareOnions.back();
    rareOnions.erase(rareOnions.end() - 1);
    return ptr;
}

unsigned int Store::get_RareOnion_count() const
{
    unsigned int temp = rareOnions.size();
    return temp;
}

void Store::add_RareOnion(RareOnion *ptr)
{
    rareOnions.push_back(ptr);
}
