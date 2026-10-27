
#ifndef ARMOR_H
#define ARMOR_H

#include "DurableItem.h"

enum ArmorType
{
    NotSet = 0,
    Light = 1,
    Medium = 10,
    Heavy = 20
};

class Armor : public DurableItem
{
private:
    std::size_t defencePoints = 0;
    ArmorType armorType = NotSet;
public:
    Armor() = default;
    Armor(std::string a_name,
        unsigned int weight_kg,
        unsigned int price,
        std::size_t durability,
        std::size_t defencePoints) :
    DurableItem(std::move(a_name), weight_kg, price, durability),
    defencePoints(defencePoints)
    {
        armorType = weight_kg <= 0 ? ArmorType::NotSet
          : weight_kg < ArmorType::Medium ? ArmorType::Light
          : weight_kg < ArmorType::Heavy  ? ArmorType::Medium
          : ArmorType::Heavy;
    }

    Armor(const Armor& armor)  = default;
    Armor& operator=(const Armor& armor) noexcept = default;

    Armor(Armor&& other) noexcept = default;
    Armor& operator=(Armor&& other) noexcept = default;

    ~Armor() override = default;

    //-------------------------------------------------------

    [[nodiscard]] size_t Use() override;
    [[nodiscard]] size_t GetDefencePoints() const;
};


#endif //ARMOR_H
