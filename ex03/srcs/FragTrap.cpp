//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex03.hpp"

FragTrap::FragTrap(void) {
	hp_ = 100;
	energy_ = 100;
	damage_ = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	hp_ = 100;
	energy_ = 100;
	damage_ = 30;
	std::cout << "FragTrap Param constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& param) {
	// TODO (copy constructor)
	(void)param;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap" << " destroyed" << std::endl;
	// TODO (destructor)
}

FragTrap& FragTrap::operator= (const FragTrap& param) {
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const FragTrap& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void	FragTrap::highFivesGuys(void){
	std::cout << "Da ca mais cinco!\n";
}

void FragTrap::attack(const std::string& target){
	if (energy_ >= 1)
	{
		std::cout << "FragTrap " << this->get_name() << " attacks " << target << " causing " << this->damage_ << " points of damage!\n";
		energy_--;
	}
}

int	FragTrap::get_hp(void){
	return (hp_);
}

int	FragTrap::get_energy(void){
	return (energy_);
}

int	FragTrap::get_damage(void){
	return (damage_);
}
