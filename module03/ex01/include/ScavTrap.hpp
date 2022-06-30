#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private :
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & copy);
		void guardGate(void) const;
};

#endif
