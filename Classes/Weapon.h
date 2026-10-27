//
// Created by denzelfox on 27.10.26.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <utility>

#include "DurableItem.h"


class Weapon : public DurableItem
{
private:
    size_t damage = 0;

public:
    Weapon() = default;

    Weapon(std::string w_name,
        unsigned int weight_kg,
        unsigned int price_coins,
        std::size_t damage,
        std::size_t durability) :
    DurableItem(std::move(w_name), weight_kg, price_coins, durability),
    damage(damage)
    {}

    Weapon& operator=(const Weapon& other) = default;
    Weapon(const Weapon& other) = default;
    Weapon& operator=(Weapon&& other) noexcept = default;
    Weapon(Weapon&& other) noexcept = default;

    ~Weapon() override = default;

    //-------------------------------------

    [[nodiscard]] size_t GetDamage() const;

    [[nodiscard]] size_t Use() override;

};


#endif
