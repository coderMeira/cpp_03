//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex02.hpp"

int	main(void)
{
	ClapTrap	clap("Clappy");
	FragTrap	frag("Fraggy");
	ScavTrap	scav("Scavy");

	clap.attack("0");
	scav.attack("1");
	frag.attack("2");
	return (0);
}
