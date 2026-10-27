
#ifndef BASEWEAPONINSTANCE_H
#define BASEWEAPONINSTANCE_H

#include "Weapon.h"
#include "IRepairable.h"
#include <cmath>
#include <memory>

class BaseWeaponInstance : public IRepairable
{
private:

    std::shared_ptr<const Weapon> weaponModel;
    std::size_t currentDurability = 0;
    std::size_t currentDamage = 0;

public:
    BaseWeaponInstance() = default;

    BaseWeaponInstance(std::shared_ptr<const Weapon> weapon_model):
    weaponModel(std::move(weapon_model)),
    currentDurability(0),
    currentDamage(0)
    {
        if (weapon_model)
        {
            currentDurability = weapon_model->GetDurability();
            currentDamage = weapon_model->GetDamage();
        }

    }

    BaseWeaponInstance(const BaseWeaponInstance& other) = delete;
    BaseWeaponInstance& operator=(const BaseWeaponInstance& other) = delete;

    BaseWeaponInstance(BaseWeaponInstance&& other) noexcept :
    weaponModel(std::move(other.weaponModel)),
    currentDurability(std::exchange(other.currentDurability,0)),
    currentDamage(std::exchange(other.currentDamage,0))
    {}

    BaseWeaponInstance& operator=(BaseWeaponInstance&& other) noexcept
    {
        if (this != &other)
        {
            weaponModel = std::move(other.weaponModel);
            currentDurability = std::exchange(other.currentDurability, 0);
            currentDamage = std::exchange(other.currentDamage, 0);
        }

        return *this;
    }

    //---------------------------------------------------

    void Repair(std::size_t val) override;

    [[nodiscard]] std::size_t GetCurrentDurability() const override;

    [[nodiscard]] std::size_t GetCurrentDamage() const
    {
        double durabilityPercentage = static_cast<double>(currentDurability) / weaponModel->GetDurability();
        double resDmg = static_cast<double>(currentDamage) * durabilityPercentage;

        return static_cast<std::size_t>(std::round(resDmg));
    }
};

#endif //BASEWEAPONINSTANCE_H
