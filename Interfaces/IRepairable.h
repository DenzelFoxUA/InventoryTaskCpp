
#ifndef IREPAIRABLE_H
#define IREPAIRABLE_H
#include <cstddef>

class IRepairable
{
public:
    virtual void Repair(std::size_t value) = 0;
    [[nodiscard]] virtual std::size_t GetCurrentDurability() const = 0;
    virtual ~IRepairable() = default;
};

#endif //IREPAIRABLE_H
