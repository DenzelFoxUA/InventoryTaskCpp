
#include "Item.h"

unsigned int Item::GetID() const
{
    return id;
}

std::string Item::GetName() const
{
    return name;
}

unsigned int Item::GetWeight() const
{
    return weight;
}

unsigned int Item::GetPrice() const
{
    return price;
}