#include "lilium.h"

extern long int money;

unsigned int Lilium::lilium_count = 0;

void Lilium::picking()
{
    inc_lilium_count();
}

Lilium::~Lilium()
{
    money = money + selling_price - OrnamentalFlowerBud::get_price();
    OrnamentalFlowerBud::inc_ornamentalFlowerBud_count();
    dec_lilium_count();
}

Lilium::Lilium(OrnamentalFlowerBud *ornamentalFlowerBud, LiliumExtract liliumExtract)
    :OrnamentalFlowerBud(*ornamentalFlowerBud)
{
    money = money - OrnamentalFlowerBud::get_price() + OrnamentalBud::get_price();
    OrnamentalBud::dec_ornamentalBud_count();
    OrnamentalFlowerBud::inc_ornamentalFlowerBud_count();
    delete ornamentalFlowerBud;

    this->liliumExtract = liliumExtract;
}

std::string Lilium::get_name() const
{
    return name;
}

long int Lilium::get_price()
{
    return selling_price;
}

void Lilium::set_lilium_count(unsigned int count)
{
    lilium_count = count;
}

void Lilium::inc_lilium_count()
{
    lilium_count++;
}

void Lilium::dec_lilium_count()
{
    lilium_count--;
}

unsigned int Lilium::get_lilium_count()
{
    return lilium_count;
}
