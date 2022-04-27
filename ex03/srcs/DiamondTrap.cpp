//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex03.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap(){
	ClapTrap::name_ = name_ + "_clap_name";
	hp_ = FragTrap::hp_;
	energy_ = ScavTrap::energy_;
	damage_ = FragTrap::damage_;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(), ScavTrap(), FragTrap(){
	name_ = name;
	ClapTrap::name_ = name_ + "_clap_name";
	hp_ = FragTrap::hp_;
	energy_ = ScavTrap::energy_;
	damage_ = FragTrap::damage_;
	std::cout << "DiamondTrap Param constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& param) {
	// TODO (copy constructor)
	(void)param;
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap" << " destroyed" << std::endl;
	// TODO (destructor)
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const DiamondTrap& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void){
	std::cout << "My name is " << name_ << ", and ClapTrap's name is " << ClapTrap::get_name() << std::endl;
}

int	DiamondTrap::get_hp(void){
	return (hp_);
}

int	DiamondTrap::get_energy(void){
	return (energy_);
}

int	DiamondTrap::get_damage(void){
	return (damage_);
}
