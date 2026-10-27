
#ifndef DURABLEITEM_H
#define DURABLEITEM_H
#include "Item.h"


class DurableItem : public Item
{
private:
    std::size_t durability = 0;

public:
    DurableItem() = default;
    DurableItem(std::string _name,
        unsigned int weight_kg,
        unsigned int price_coins,
        std::size_t durability) :
    Item(std::move(_name),weight_kg,price_coins),
    durability(durability) {}

    DurableItem(const DurableItem& item) = default;
    DurableItem& operator=(const DurableItem& item) = default;
    DurableItem(DurableItem&& item) = default;
    DurableItem& operator=(DurableItem&& item) = default;

    ~DurableItem() override = default;

    //----------------------------------------------------

    std::size_t Use() override = 0;

    [[nodiscard]] std::size_t GetDurability() const;

};


#endif //DURABLEITEM_H
