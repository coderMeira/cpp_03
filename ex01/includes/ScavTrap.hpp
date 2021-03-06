//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap&	operator= (const ScavTrap&); // const for safety... not super nesessary

		void 	attack(const std::string& target);
		void	guardGate(void);
		int		get_energy(void);
		int		get_hp(void);
		int		get_damage(void);
};

std::ostream&	operator<<(std::ostream&, const ScavTrap&);

#endif
