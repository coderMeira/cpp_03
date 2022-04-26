//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex01.hpp"

int	main(void)
{
	ScavTrap fred("Dews");
	ScavTrap salva("Ceu");
	fred.attack("Ceu");
	salva.takeDamage(12);
	salva.beRepaired(13);
	fred.guardGate();
	salva.attack("Dews");
	return (0);
}
