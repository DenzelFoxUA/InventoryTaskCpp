//
// Created by denzelfox on 27.10.26.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <utility>

#include "Item.h"


class Weapon : public Item
{
private:
    size_t damage = 0;

public:
    Weapon() : Item() {
        damage = 0;
    }

    Weapon(size_t damage,
        std::string w_name,
        unsigned int weight_kg,
        unsigned int price_coins) :
    Item(std::move(w_name), weight_kg, price_coins),
    damage(damage){}

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
