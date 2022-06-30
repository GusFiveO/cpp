#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(100), _energyPoints(50), _attackDamages(20){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _attackDamages(20) {
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy) : _name(copy._name), _hitPoints(100), _energyPoints(50), _attackDamages(20) {
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
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damages" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " hit points are already to 0" << std::endl;
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " hit points are now to " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints != 10)
		std::cout << "ClapTrap " << this->_name << " recovered " << amount << " hit points" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " hit points are already full" << std::endl;
	if (this->_hitPoints + amount >= 10)
		this->_hitPoints = 10;
	else
		this->_hitPoints += amount;
	if (this->_energyPoints < 10)
		this->_energyPoints++;
	std::cout << "ClapTrap " << this->_name << " hit points are now to " << this->_hitPoints << std::endl;
}
