#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bob("Bob");

	bob.guardGate();
	for (int i = 0; i < 11; i++)
		bob.attack("Eric");
	for (int i = 0; i < 10; i++)
		bob.beRepaired(10);
	for (int i = 0; i < 10; i++)
		bob.takeDamage(10);
	return 0;
}
