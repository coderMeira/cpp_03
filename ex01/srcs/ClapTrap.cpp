//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	name_ = "";
	hp_ = 10;
	energy_ = 10;
	damage_ = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	name_ = name;
	hp_ = 10;
	energy_ = 10;
	damage_ = 0;
	std::cout << "ClapTrap Param constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& param) {
	// TODO (copy constructor)
	(void)param;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap" << " destroyed" << std::endl;
	// TODO (destructor)
}

ClapTrap& ClapTrap::operator= (const ClapTrap& param) {
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const ClapTrap& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void ClapTrap::attack(const std::string& target){
	if (energy_ >= 1)
	{
		std::cout << "ClapTrap " << this->name_ << " attacks " << target << " causing " << this->damage_ << " points of damage!\n";
		energy_--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->name_ << " looses " << amount << " hp\n";
	hp_ -= amount;
	if (hp_ <= 0)
		std::cout << this->name_ << " dies!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << this->name_ << " is repaired for " << amount << " hp\n";
	hp_ += amount;
	energy_--;
	if (hp_ > 10)
		hp_ = 10;
}

const std::string	ClapTrap::get_name(void){
	return (name_);
}

int	ClapTrap::get_hp(void){
	return (hp_);
}

int	ClapTrap::get_energy(void){
	return (energy_);
}

int	ClapTrap::get_damage(void){
	return (damage_);
}
