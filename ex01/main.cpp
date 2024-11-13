#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("A");
	ScavTrap b;

	b = ScavTrap("B");

	a.attack("B");
	b.takeDamage(99);
	b.beRepaired(3);
	b.guardGate();
	b.attack("A");
	a.takeDamage(100);
	a.beRepaired(3);
	a.guardGate();
	return (0);
}
