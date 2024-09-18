#include "Base.hpp"

int main()
{
    Base* base = generate();
    Base & any = *base;
    identify(base);
    identify(any);
}