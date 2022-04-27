//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		ClapTrap&	operator= (const ClapTrap&); // const for safety... not super nesessary
		void 				attack(const std::string& target);
		void 				takeDamage(unsigned int amount);
		void 				beRepaired(unsigned int amount);
		const std::string	get_name(void);
		int					get_hp(void);
		int					get_energy(void);
		int					get_damage(void);

		protected:
		std::string			name_;
		int					hp_;
		int					energy_;
		int					damage_;
};

std::ostream&	operator<<(std::ostream&, const ClapTrap&);

#endif

