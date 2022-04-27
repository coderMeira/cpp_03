//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		~FragTrap();
		FragTrap&	operator= (const FragTrap&); // const for safety... not super nesessary

		void 	attack(const std::string& target);
		void	highFivesGuys(void);
		int		get_energy(void);
		int		get_hp(void);
		int		get_damage(void);
};

std::ostream&	operator<<(std::ostream&, const FragTrap&);

#endif
