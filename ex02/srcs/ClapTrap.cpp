//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name(""), hp(100), energy(100), damage(30) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), hp(100), energy(100), damage(30) {
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
	// TODO (Assignment operatior)
	// std::swap()
	(void)param;
	return (*this);
}

std::ostream& operator<<(std::ostream& s, const ClapTrap& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

void ClapTrap::attack(const std::string& target){
	if (energy >= 1 && hp >= 1)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->damage << " points of damage!\n";
		energy--;
	}
}
void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->_name << " looses " << amount << " hp\n";
	hp -= amount;
	if (hp <= 0)
		std::cout << this->_name << " dies!\n";
}
void ClapTrap::beRepaired(unsigned int amount){
	std::cout << this->_name << " is repaired for " << amount << " hp\n";
	hp += amount;
	if (hp > 10)
		hp = 10;
}

const std::string	ClapTrap::get_name(void){
	return (_name);
}
