#include "FragTrap.hpp"

int	main(void)
{
	FragTrap a("A");
	FragTrap b;

	b = FragTrap("B");

	a.attack("B");
	b.takeDamage(99);
	b.beRepaired(3);
	b.highFivesGuys();
	b.attack("A");
	a.takeDamage(100);
	a.beRepaired(3);
	a.highFivesGuys();
	return (0);
}
