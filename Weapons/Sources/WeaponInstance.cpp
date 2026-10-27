
#include "../BaseWeaponInstance.h"

void BaseWeaponInstance::Repair(std::size_t val) {

    if(currentDurability + val >= weaponModel->GetDurability())
    {
        currentDurability = weaponModel->GetDurability();
    }

    currentDurability += val;
}

std::size_t BaseWeaponInstance::GetCurrentDurability() const
{
    return currentDurability;
}

std::size_t BaseWeaponInstance::GetCurrentDamage() const
{
    double durabilityPercentage =
        static_cast<double>(currentDurability) / weaponModel->GetDurability();
    double resDmg = static_cast<double>(currentDamage) * durabilityPercentage;

    return static_cast<std::size_t>(std::round(resDmg));
}
