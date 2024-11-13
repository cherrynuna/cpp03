#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("noname"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
	: name(obj.name),
	  HitPoint(obj.HitPoint),
	  EnergyPoint(obj.EnergyPoint),
	  AttackDamage(obj.AttackDamage)
{
	// *this = obj;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->HitPoint = obj.HitPoint;
		this->EnergyPoint = obj.EnergyPoint;
		this->AttackDamage = obj.AttackDamage;
		std::cout << "ClapTrap copy assignment operator called" << std::endl;
		// this->name = obj.getName();
		// this->Hitpoint = obj.getHitpoints();
		// this->Energypoint = obj.getEnergypoints();
		// this->Attackdamage = obj.getAttackdamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}


void	ClapTrap::attack(const std::string& target)// target losing <attack damage> hit points
{
	// std::cout << name << "'s status: HP " << HitPoint << ", EP " << EnergyPoint << ", AD " << AttackDamage << std:: endl;
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << " can’t do anything." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint >= amount)
		this->HitPoint -= amount;
	else
		this->HitPoint = 0;
	// std::cout << name << "'s status: HP " << HitPoint << ", EP " << EnergyPoint << ", AD " << AttackDamage << std:: endl;
}

void	ClapTrap::beRepaired(unsigned int amount)//it gets <amount> hit points back
{
	// std::cout << name << "'s status: HP " << HitPoint << ", EP " << EnergyPoint << ", AD " << AttackDamage << std:: endl;
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		this->EnergyPoint--;
		this->HitPoint += amount;
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
