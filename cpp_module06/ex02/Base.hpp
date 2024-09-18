#pragma once
#ifndef BASE_H
# define BASE_H
#include <iostream>


class Base
{
    public:
        virtual ~Base() {};

};

class A : virtual public Base{};

class B : virtual public Base{};

class C : virtual public Base{};

Base *generate(void);

void identify(Base* p);
void identify(Base& p);

#endif