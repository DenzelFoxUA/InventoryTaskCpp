
#include "Armor.h"

#include <iostream>
#include <ostream>

size_t Armor::Use()
{
    std::cout << "Armor deflected damage" << std::endl;
    std::cout << "Current defence points: " + std::to_string(GetDefencePoints()) << std::endl;

    return defencePoints;
}

size_t Armor::GetDefencePoints() const
{
    return defencePoints;
}
