//
// Created by denzelfox on 27.10.26.
//

#include "Weapon.h"
#include <iostream>


size_t Weapon::GetDamage() const
{
    return damage;
}

[[nodiscard]] size_t Weapon::Use()
{
    std::cout << "Weapon used" << std::endl;
    return damage;
}