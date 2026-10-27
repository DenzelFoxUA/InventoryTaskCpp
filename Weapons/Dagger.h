
#ifndef IRONDAGGER_H
#define IRONDAGGER_H
#include "Weapon.h"


class IronDagger : public Weapon
{

private:
    std::size_t currDuarability = 0;


public:
    IronDagger() = default;

    IronDagger(const IronDagger& other) = default;
    IronDagger& operator=(const IronDagger& other) = default;

    IronDagger(IronDagger&& other) noexcept = default;
    IronDagger& operator=(IronDagger&& other) noexcept = default;

    ~IronDagger() override = default;

    //-------------------------------------------------

    

};


#endif //IRONDAGGER_H
