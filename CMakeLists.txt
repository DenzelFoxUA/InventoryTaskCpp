cmake_minimum_required(VERSION 4.3)
project(InventoryTask)

set(CMAKE_CXX_STANDARD 17)

add_executable(InventoryTask main.cpp
        Classes/Sources/Item.cpp
        Classes/Item.h
        Classes/Sources/Weapon.cpp
        Classes/Weapon.h
        Classes/Sources/Armor.cpp
        Classes/Armor.h
        Classes/Sources/Inventory.cpp
        Classes/Inventory.h
        Classes/Sources/Character.cpp
        Classes/Character.h
        Interfaces/ICharacter.h
        Classes/Sources/DurableItem.cpp
        Classes/DurableItem.h
        Interfaces/IRanged.h
        Weapons/Sources/Dagger.cpp
        Weapons/Dagger.h
        Interfaces/IRepairable.h
        Weapons/BaseWeaponInstance.cpp
        Weapons/BaseWeaponInstance.h
)

target_include_directories(InventoryTask PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/Classes"
        "${CMAKE_CURRENT_SOURCE_DIR}/Armor"
        "${CMAKE_CURRENT_SOURCE_DIR}/Weapons"
        "${CMAKE_CURRENT_SOURCE_DIR}/Interfaces"
)
