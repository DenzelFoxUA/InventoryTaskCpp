//
// Created by denzelfox on 27.10.26.
//

#ifndef ICHARACTER_H
#define ICHARACTER_H


class ICharacter
{
public:
    virtual void Move() = 0;
    virtual void Heal() = 0;

    virtual ~ICharacter() = default;
};


#endif //ICHARACTER_H
