#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private :
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & copy);
		~ScavTrap(void);
		void guardGate(void) const;
		void attack(const std::string & target);
		const ScavTrap & operator=(const ScavTrap & assign);
};

#endif
