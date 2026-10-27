
#ifndef IRONDAGGER_H
#define IRONDAGGER_H
#include "Weapon.h"


class Dagger : public Weapon
{

private:
    std::size_t currDuarability = 0;


public:
    Dagger() = default;

    Dagger(const Dagger& other) = default;
    Dagger& operator=(const Dagger& other) = default;

    Dagger(Dagger&& other) noexcept = default;
    Dagger& operator=(Dagger&& other) noexcept = default;

    ~Dagger() override = default;

    //-------------------------------------------------



};


#endif //IRONDAGGER_H
