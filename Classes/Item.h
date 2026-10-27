//
// Created by denzelfox on 27.10.26.
//

#ifndef ITEM_H
#define ITEM_H

#include <string>

/*Поля:
- std::string name
- int weight
- int value
Методи:
- Конструктор з параметрами.
- Віртуальний деструктор.
- Чисто віртуальний метод void Use().
- Метод GetName() const.*/

class Item
{
private:
    std::string name = "";
    unsigned int weight = 0;
    unsigned int price = 0;

public:
    Item() = default;
    Item(std::string _name, unsigned int weight_kg, unsigned int price_coins)
    {
        name = _name;
        weight = weight_kg;
        price = price_coins;
    }

    Item& operator=(const Item& other) = default;
    Item(const Item& other) = default;
    Item& operator=(Item&& other) noexcept = default;
    Item(Item&& other) noexcept = default;

    //------------------------------------------
    [[nodiscard]] std::string GetName() const;

    [[nodiscard]] unsigned int GetWeight() const;

    [[nodiscard]] unsigned int GetPrice() const;

    [[nodiscard]] virtual size_t Use() = 0;

    virtual ~Item() = default;

};


#endif //ITEM_H
