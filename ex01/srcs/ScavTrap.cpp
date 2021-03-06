//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	hp_ = 100;
	energy_ = 50;
	damage_ = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	hp_ = 100;
	energy_ = 50;
	damage_ = 20;
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
	if (energy_ >= 1)
	{
		std::cout << "ScavTrap " << this->get_name() << " attacks " << target << " causing " << this->damage_ << " points of damage!\n";
		energy_--;
	}
}

int	ScavTrap::get_hp(void){
	return (hp_);
}

int	ScavTrap::get_energy(void){
	return (energy_);
}

int	ScavTrap::get_damage(void){
	return (damage_);
}
