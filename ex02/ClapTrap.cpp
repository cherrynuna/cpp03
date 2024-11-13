#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("noname"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
	// : name(obj.name),
	//   HitPoint(obj.HitPoint),
	//   EnergyPoint(obj.EnergyPoint),
	//   AttackDamage(obj.AttackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
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
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructor called" << std::endl;
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
		std::cout << "ClapTrap " << this->name << " can’t do anything" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint >= amount)
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage, ";
		this->HitPoint -= amount;
		std::cout << "remaining Hit point is " << this->HitPoint << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " takes " << this->HitPoint << " points of damage, ";
		this->HitPoint = 0;
		std::cout << "remaining Hit point is 0" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		this->EnergyPoint--;
		this->HitPoint += amount;
		std::cout << "ClapTrap " << this->name << " repairs for " << amount << " points, ";
		std::cout << "current Hit points: " << this->HitPoint << ", Energy points: " << this->EnergyPoint << std::endl;

	}
	else
		std::cout << "ClapTrap " << this->name << " can’t do anything" << std::endl;
}

	// std::cout << name << "'s status: HP " << HitPoint << ", EP " << EnergyPoint << ", AD " << AttackDamage << std:: endl;
