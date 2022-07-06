#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 20;
	std::cout << "ScavTrap default constuctor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamages = 20;
	std::cout << "ScavTrap parameterized constuctor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copy) : ClapTrap(copy) {
	std::cout << "ScavTrap copy constuctor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap default destuctor called" << std::endl;
}

void ScavTrap::attack(const std::string & target) {
	std::cout << "Scavtrap " << this->_name << " attacks " << target << " causing " << this->_attackDamages << " points of damages" << std::endl;
}

void ScavTrap::guardGate(void) const {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

const ScavTrap & ScavTrap::operator=(const ScavTrap & assign) {
	this->_name = assign._name;
	this->_hitPoints = assign._hitPoints;
	this->_energyPoints = assign._energyPoints;
	this->_attackDamages = assign._attackDamages;
	return *this;
}
