#pragma once
#include <iostream>
#include <string>


class Zombie
{
private:
    std::string _name;
public:
    Zombie(void);
    Zombie(std::string name);
    Zombie(Zombie const& src);
    Zombie& operator=(Zombie const& rhs);
    void    setName(std::string name);
    void announce( void );
    ~Zombie(void);
};