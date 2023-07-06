#include <iostream>
#include <string>

class Weapon {
private:
    std::string _type;
public:
    Weapon(void);
    Weapon(std::string type);
    Weapon(Weapon const& src);
    Weapon& operator=(Weapon const& rhs);
    void    setType(std::string type);
    std::string const&  getType(void) const;
    ~Weapon(void);
};