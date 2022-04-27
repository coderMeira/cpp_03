//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex00.hpp"

int	main(void)
{
	std::cout << RED << "\t\t\n[ CONSTRUCTORS ]\n\n" << ENDC;
	ClapTrap	clap("Clappy");
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::cout << "\t\t\n[ First energy-value check ]\n\n";
	std::cout << "Clappy energy = " << clap.get_energy() << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\t\t\n[ First hp-value check ]\n\n";
	std::cout << "Clappy hp = " << clap.get_hp() << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\t\t\n[ ATTACKS ]\n\n";
	clap.attack("0");
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\t\t\n[ TAKE DMG ]\n\n";
	clap.takeDamage(10);
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\t\t\n[ Second member-value check ]\n\n";
	std::cout << "Clappy energy = " << clap.get_energy() << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\t\t\n[ Second hp-value check ]\n\n";
	std::cout << "Clappy hp = " << clap.get_hp() << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\t\t\n[ DESTRUCTORS ]\n\n";
	return (0);
}
