#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("noname"), Hitpoint(10), Energypoint(10), Attackdamage(0)
{
}

ClapTrap::ClapTrap(std::string name) : name(name), Hitpoint(10), Energypoint(10), Attackdamage(0)
{
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
	: name(claptrap.name),
	  Hitpoint(claptrap.Hitpoint),
	  Energypoint(claptrap.Energypoint),
	  Attackdamage(claptrap.Attackdamage)
{
	// *this = claptrap;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& claptrap)
{
	if (this != &claptrap)
	{
		this->name = claptrap.name;
		this->Hitpoint = claptrap.Hitpoint;
		this->Energypoint = claptrap.Energypoint;
		this->Attackdamage = claptrap.Attackdamage;
		// this->name = claptrap.getName();
		// this->Hitpoint = claptrap.getHitpoints();
		// this->Energypoint = claptrap.getEnergypoints();
		// this->Attackdamage = claptrap.getAttackdamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
}


void	ClapTrap::attack(const std::string& target)// target losing <attack damage> hit points
{
	std::cout << name << "'s status: HP " << Hitpoint << ", EP " << Energypoint << ", AD " << Attackdamage << std:: endl;
	if (this->Energypoint > 0 || this->Hitpoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->Attackdamage << " points of damage!" << std::endl;
		this->Energypoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << " can’t do anything." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hitpoint >= amount)
		this->Hitpoint -= amount;
	else
		this->Hitpoint = 0;
	std::cout << name << "'s status: HP " << Hitpoint << ", EP " << Energypoint << ", AD " << Attackdamage << std:: endl;
}

void	ClapTrap::beRepaired(unsigned int amount)//it gets <amount> hit points back
{
	std::cout << name << "'s status: HP " << Hitpoint << ", EP " << Energypoint << ", AD " << Attackdamage << std:: endl;
	if (this->Energypoint > 0 || this->Hitpoint > 0)
	{
		this->Energypoint--;
		this->Hitpoint += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " can’t do anything." << std::endl;
}

// std::string		ClapTrap::getName() const
// {
// 	return (this->name);
// }

// unsigned int	ClapTrap::getHitpoint(void) const
// {
// 	return (this->Hitpoint);
// }

// unsigned int	ClapTrap::getEnergypoint(void) const
// {
// 	return (this->Energypoint);
// }

// unsigned int	ClapTrap::getAttackdamage(void) const
// {
// 	return (this->Attackdamage);
// }

// void	ClapTrap::setHitpoints(unsigned int const num)
// {
// 	this->Hitpoint = num;
// }

// void	ClapTrap::setEnergypoints(unsigned int const num)
// {
// 	this->Energypoint = num;
// }

// void	ClapTrap::setAttackdamage(unsigned int const num)
// {
// 	this->Attackdamage = num;
// }
