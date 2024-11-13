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
		ClapTrap(const ClapTrap& obj);
		ClapTrap&	operator=(const ClapTrap& obj);
		virtual ~ClapTrap();//가상 함수, 자식 함수에서 변환 했음을 표시+부모~자식소멸자

		virtual void	attack(const std::string& target);// to call the derived class’s overridden version
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		//virtual 키워드가 없으면 정적 바인딩이 이루어져서 컴파일 타임에 호출될 함수가 고정되기 때문에, 부모 클래스의 함수가 호출됩니다.
};

#endif
