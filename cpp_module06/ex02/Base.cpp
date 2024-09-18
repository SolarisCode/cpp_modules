#include "Base.hpp"

Base *generate(void)
{
    srand(time(NULL));
    switch (rand() % 3)
    {
        case 0:
            return (static_cast <Base *> (new A));
        case 1:
            return (static_cast <Base *> (new B));
        case 2:
            return (static_cast <Base *> (new C));
        default:
            return NULL;
    }
}

void identify(Base *p) 
{
    if (dynamic_cast<A *>(p))
        std::cout << "the actual type pointed to is : A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "the actual type pointed to is : B\n";
    else
        std::cout << "the actual type pointed to is : C\n";
}

void identify(Base &p)
{
    try
    {
        dynamic_cast <A &> (p);
         std::cout << "the actual type is : A\n";
    }
    catch(const std::exception& e){}
    try 
    {
        dynamic_cast <B &> (p);
         std::cout << "the actual type is : B\n";
    }
    catch(const std::exception& e){}
    try
    {
        dynamic_cast <C &> (p);
         std::cout << "the actual type is : C\n";
    }
    catch(const std::exception& e){}
    
}