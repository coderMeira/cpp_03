//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	// TODO (default constructor)
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

}
void ClapTrap::takeDamage(unsigned int amount){

}
void ClapTrap::beRepaired(unsigned int amount){

}
