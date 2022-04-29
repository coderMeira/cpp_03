//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "ex03.hpp"

int	main(void)
{
	std::cout << RED << "\t\t\n[ CONSTRUCTORS ]\n\n" << ENDC;
	ClapTrap	clap("Clappy");
	ScavTrap	scav("Scavy");
	FragTrap	frag("Fraggy");
	DiamondTrap	didi("Big D");

	std::cout << YELLOW << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;

	std::cout << RED <<"\t\t\n[ First energy-value check ]\n\n" << ENDC;
	std::cout << "Clappy energy = " << clap.get_energy() << std::endl;
	std::cout << "Scavy energy = " << scav.get_energy() << std::endl;
	std::cout << "Fraggy energy = " << frag.get_energy() << std::endl;
	std::cout << "Big D energy = " << didi.get_energy() << std::endl;

	std::cout << YELLOW << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;

	std::cout << RED <<"\t\t\n[ First hp-value check ]\n\n" << ENDC;
	std::cout << "Clappy hp = " << clap.get_hp() << std::endl;
	std::cout << "Scavy hp = " << scav.get_hp() << std::endl;
	std::cout << "Fraggy hp = " << frag.get_hp() << std::endl;
	std::cout << "Big D hp = " << didi.get_hp() << std::endl;

	std::cout << YELLOW << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;

	std::cout << RED <<"\t\t\n[ ATTACKS ]\n\n" << ENDC;
	clap.attack("0");
	scav.attack("1");
	frag.attack("2");
	didi.attack("3");

	std::cout << YELLOW << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;

	std::cout << RED <<"\t\t\n[ TAKE DMG ]\n\n" << ENDC;
	clap.takeDamage(10);
	scav.takeDamage(10);
	frag.takeDamage(10);
	didi.takeDamage(10);

	std::cout << YELLOW << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;

	std::cout << RED <<"\t\t\n[ Second member-value check ]\n\n" << ENDC;
	std::cout << "Clappy energy = " << clap.get_energy() << std::endl;
	std::cout << "Scavy energy = " << scav.get_energy() << std::endl;
	std::cout << "Fraggy energy = " << frag.get_energy() << std::endl;
	std::cout << "Big D energy = " << didi.get_energy() << std::endl;

	std::cout << YELLOW << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;

	std::cout << RED <<"\t\t\n[ Second hp-value check ]\n\n" << ENDC;
	std::cout << "Clappy hp = " << clap.get_hp() << std::endl;
	std::cout << "Scavy hp = " << scav.get_hp() << std::endl;
	std::cout << "Fraggy hp = " << frag.get_hp() << std::endl;
	std::cout << "Big D hp = " << didi.get_hp() << std::endl;

	std::cout << YELLOW << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;

	std::cout << RED <<"\t\t\n[ CUSTOM FUNCTIONS ]\n\n" << ENDC;
	didi.guardGate();
	didi.highFivesGuys();
	didi.whoAmI();

	std::cout << YELLOW << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << ENDC;

	std::cout << RED <<"\t\t\n[ DESTRUCTORS ]\n\n" << ENDC;
	return (0);
}
