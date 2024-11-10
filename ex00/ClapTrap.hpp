#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	Hitpoint;
		unsigned int	Energypoint;
		unsigned int	Attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& fixed);
		ClapTrap&	operator=(const ClapTrap& fixed);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		// std::string		getName() const;
		// unsigned int	getHitpoint(void) const;
		// unsigned int	getEnergypoint(void) const;
		// unsigned int	getAttackdamage(void) const;

		// void	setHitpoints(unsigned int const num);
		// void	setEnergypoints(unsigned int const num);
		// void	setAttackdamage(unsigned int const num);

};

#endif
