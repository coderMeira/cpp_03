//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex03.hpp"

DiamondTrap::DiamondTrap(void){
	ScavTrap scav_tmp;
	FragTrap frag_tmp;
	ClapTrap::name_ = name_ + "_clap_name";
	hp_ = frag_tmp.get_hp();
	energy_ = scav_tmp.get_energy();
	damage_ = frag_tmp.get_damage();
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
	name_ = name;
	ScavTrap scav_tmp;
	FragTrap frag_tmp;
	ClapTrap::name_ = name_ + "_clap_name";
	hp_ = frag_tmp.get_hp();
	energy_ = scav_tmp.get_energy();
	damage_ = frag_tmp.get_damage();
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
