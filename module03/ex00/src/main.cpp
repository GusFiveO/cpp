#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");

	for (int i = 0; i < 11; i++)
		bob.attack("Eric");
	for (int i = 0; i < 10; i++)
		bob.beRepaired(10);
	for (int i = 0; i < 10; i++)
		bob.takeDamage(10);
	return 0;
}
