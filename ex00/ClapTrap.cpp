#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("noname"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
}

ClapTrap::ClapTrap(const ClapTrap& obj)
	: name(obj.name),
	  HitPoint(obj.HitPoint),
	  EnergyPoint(obj.EnergyPoint),
	  AttackDamage(obj.AttackDamage)
{
	// *this = obj;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->HitPoint = obj.HitPoint;
		this->EnergyPoint = obj.EnergyPoint;
		this->AttackDamage = obj.AttackDamage;
		// this->name = obj.getName();
		// this->Hitpoint = obj.getHitpoints();
		// this->Energypoint = obj.getEnergypoints();
		// this->Attackdamage = obj.getAttackdamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
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
