
#ifndef IRANGED_H
#define IRANGED_H
#include <cstddef>

class IRanged
{

public:
   virtual void Reload() = 0;
   [[nodiscard]] virtual std::size_t GetCurrentAmmoCount() const = 0;
   virtual ~IRanged() = default;

};

#endif //IRANGED_H
