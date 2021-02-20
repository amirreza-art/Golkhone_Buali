#include "liliumextract.h"

LiliumExtract::LiliumExtract()
{

}

void LiliumExtract::operator=(const unsigned int &count)
{
    liliumExtract_count = count;
}

LiliumExtract::LiliumExtract(Tuberose tuberose, Amaryllis amaryllis, Water water)
{
    this->tuberose = tuberose;
    this->amaryllis = amaryllis;
    this->water = water;
}
