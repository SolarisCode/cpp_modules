#include "Weapon.hpp"

Weapon::Weapon(void) {
    std::cout << "Defualt Constructor called!" << std::endl;
    return;
}

Weapon::Weapon(std::string type) : _type(type) {
    std::cout << "Parametric Constructor called!" << std::endl;
    return;
}

Weapon::Weapon(Weapon const& src) {
    std::cout << "Copy Constructor called!" << std::endl;
    *this = src;
    return;
}

Weapon& Weapon::operator=(Weapon const& rhs) {
    std::cout << "Assignment Operator called!" << std::endl;
    if (this != &rhs) {
        this->_type = rhs.getType();
    }
    return (*this);
}

void    Weapon::setType(std::string type) {
    _type = type;
    return;
}

std::string const&   Weapon::getType(void) const {
    return (_type);
}

Weapon::~Weapon(void) {
    std::cout << "Destructor Called!" << std::endl;
    return;
}