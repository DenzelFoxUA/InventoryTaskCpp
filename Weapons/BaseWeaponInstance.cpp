
#include "BaseWeaponInstance.h"

void BaseWeaponInstance::Repair(std::size_t val) {

    if(currentDurability + val >= this->GetDurability())
    {
        currentDurability = GetDurability();
    }

    currentDurability += val;
}

std::size_t BaseWeaponInstance::GetCurrentDurability() const
{
    return currentDurability;
}
