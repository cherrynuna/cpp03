#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("A");
	ClapTrap bb("B");
	ClapTrap b(bb);

	a.attack("B");
	b.takeDamage(0);
	b.beRepaired(3);
	b.attack("A");
	a.takeDamage(20);
	a.beRepaired(10);
	return (0);
}
