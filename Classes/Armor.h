
#ifndef ARMOR_H
#define ARMOR_H
#include "Item.h"


class Armor : public Item
{
private:
    std::size_t defencePoints = 0;
public:
    Armor() = default;
    Armor(std::size_t defencePoints,
        std::string a_name,
        unsigned int weight_kg,
        unsigned int price) :
    Item(std::move(a_name), weight_kg, price),
    defencePoints(defencePoints) {}

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
