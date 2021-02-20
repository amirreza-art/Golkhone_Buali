#include "lilium.h"

unsigned int Lilium::lilium_count = 0;

Lilium::Lilium()
{

}

Lilium::Lilium(OrnamentalFlowerBud ornamentalFlowerBud, LiliumExtract liliumExtract)
{
    this->ornamentalFlowerBud = ornamentalFlowerBud;
    this->liliumExtract = liliumExtract;
    inc_lilium_count();
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
