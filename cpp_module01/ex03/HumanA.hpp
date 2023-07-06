#include <iostream>
#include <string>
#include "Weapon.hpp"
typedef std::string String;

class   HumanA {
private:
    String _name;
    Weapon _weapon;
public:
    HumanA(void);
    HumanA(String name, Weapon& weapon);
    HumanA(HumanA const& src);
    HumanA& operator=(HumanA const& rhs);
    String& getName(void) const;
    Weapon& getWeapon(void) const;
    void    attack(void) const;
    ~HumanA(void);
};