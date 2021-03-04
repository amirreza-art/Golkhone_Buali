#ifndef ORNAMENTALONION_H
#define ORNAMENTALONION_H
#include <iostream>


class OrnamentalOnion
{
public:
    OrnamentalOnion();
    std::string get_name() const;
private:
    const std::string name = "Ornamental Onion";
};

#endif // ORNAMENTALONION_H

