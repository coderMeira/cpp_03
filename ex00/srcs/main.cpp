//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex00.hpp"

int	main(void)
{
	ClapTrap player1("Dews");
	ClapTrap player2("Ceu");
	player1.attack("Ceu");
	player2.takeDamage(100);
	player2.beRepaired(1);
	return (0);
}
