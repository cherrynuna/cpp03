#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected://자식들도 볼 수 있게
		std::string		name;
		unsigned int	HitPoint;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& fixed);
		ClapTrap&	operator=(const ClapTrap& fixed);
		virtual ~ClapTrap();//가상 함수, 자식 함수에서 변환 했음을 표시+부모~자식소멸자

		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		// std::string		getName() const;
		// unsigned int	getHitpoint(void) const;
		// unsigned int	getEnergypoint(void) const;
		// unsigned int	getAttackdamage(void) const;

		// void	setHitpoints(unsigned int const num);
		// void	setEnergypoints(unsigned int const num);
		// void	setAttackdamage(unsigned int const num);

};

#endif
