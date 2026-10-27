//
// Created by denzelfox on 27.10.26.
//
#include "Item.h"

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