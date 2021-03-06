#ifndef TEST_NINJATRAP_HPP
#define TEST_NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class NinjaTrap : public ClapTrap{
public:
    NinjaTrap(void);
    NinjaTrap(std::string const &name);
    NinjaTrap(NinjaTrap const &src);
    ~NinjaTrap();
    NinjaTrap & operator=(NinjaTrap const &rhs);


    unsigned int meleeAttack(std::string const &target) const;
    unsigned int rangedAttack(std::string const &target) const;

    void ninjaShoeBox(FragTrap &claptrap);
    void ninjaShoeBox(ScavTrap &claptrap);
    void ninjaShoeBox(ClapTrap &claptrap);
    void ninjaShoeBox(NinjaTrap &claptrap);

};

#endif
