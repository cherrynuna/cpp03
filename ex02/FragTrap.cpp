#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("noname")
{
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) 
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "FragTrap copy assignment operator called" << std::endl;

	return (*this);
}

FragTrap::~FragTrap(void) 
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "FragTrap " << this->name << ": Give me five!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "FragTrap " << this->name << " can’t do anything" << std::endl;
}
