//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex02.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap Param constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& param) {
	// TODO (copy constructor)
	(void)param;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap" << " destroyed" << std::endl;
	// TODO (destructor)
}

ScavTrap& ScavTrap::operator= (const ScavTrap& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const ScavTrap& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void	ScavTrap::guardGate(void){
	std::cout << this->get_name() << " is now in Gate Keeper mode\n";
}

void ScavTrap::attack(const std::string& target){
	if (energy >= 1)
	{
		std::cout << "ScavTrap " << this->get_name() << " attacks " << target << " causing " << this->damage << " points of damage!\n";
		energy--;
	}
}
