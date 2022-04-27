//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

#include <iostream>
#include "ex03.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap();
		DiamondTrap&	operator= (const DiamondTrap&); // const for safety... not super nesessary

		void	attack(const std::string& target);
		void	whoAmI(void);
		int		get_energy(void);
		int		get_hp(void);
		int		get_damage(void);

	private:
	std::string	name_;
};

std::ostream&	operator<<(std::ostream&, const DiamondTrap&);

#endif
