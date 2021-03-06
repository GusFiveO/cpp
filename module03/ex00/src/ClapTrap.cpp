#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamages(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamages(0) {
	std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy) : _name(copy._name), _hitPoints(10), _energyPoints(10), _attackDamages(0) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

const ClapTrap & ClapTrap::operator=(const ClapTrap & assign) {
	(void)assign;
	return *this;
}

void ClapTrap::attack(const std::string & target) {
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamages << " points of damages" << std::endl;
	}
	else
		std::cout << "Energy level too low" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints != 0)
	{
		if (amount >= this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damages" << std::endl;
		std::cout << "ClapTrap " << this->_name << " hit points are now to " << this->_hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " hit points are already to 0" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0)
		std::cout << this->_name << " energy level too low" << std::endl;
	else if (this->_hitPoints != 10)
	{
		this->_energyPoints--;
		if (this->_hitPoints + amount >= 10)
			this->_hitPoints = 10;
		else
			this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " recovered " << amount << " hit points" << std::endl;
		std::cout << "ClapTrap " << this->_name << " hit points are now to " << this->_hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " hit points are already full" << std::endl;
}
