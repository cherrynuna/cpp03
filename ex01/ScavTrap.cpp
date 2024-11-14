#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("noname")
{
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	this->name = obj.name;
	this->AttackDamage = obj.AttackDamage;
	this->HitPoint = obj.HitPoint;
	this->EnergyPoint = obj.EnergyPoint;
	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	return (*this);
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << " can’t do anything" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->EnergyPoint > 0 && this->HitPoint > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << " can’t do anything" << std::endl;
}
