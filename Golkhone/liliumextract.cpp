#include "liliumextract.h"

extern long int money;

LiliumExtract::LiliumExtract(Tuberose *tuberose, Amaryllis *amaryllis, Water *water)
{
    this->tuberose = tuberose;
    this->amaryllis = amaryllis;
    this->water = water;
}

// bara delet logical tedad dasti kam kon
LiliumExtract::~LiliumExtract()
{
    money -= Tuberose::get_price();
    Tuberose::dec_tuberose_count();

    money -= Amaryllis::get_price();
    Amaryllis::dec_Amaryllis_count();

    delete tuberose;
    delete amaryllis;
    delete water;
}

std::string LiliumExtract::get_name() const
{
    return name;
}
