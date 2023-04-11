/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:33:26 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 17:29:30 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap (NULL) created\n";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	this->name = "NULL";
}

FragTrap::FragTrap(std::string name)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	this->name = name;
	std::cout << "FragTrap " << this->name << " created\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->name << "(FragTrap) exiting...\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->name << "(FragTrap) requested for a positive high fives request HEHE...\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->hitPoint == 0)
		std::cout << this->name << "(FragTrap) died long time ago\n";
	if (this->energyPoint == 0)
		std::cout << this->name << "(FragTrap) has 0 energy point\n";
	if (this->energyPoint == 0 || this->hitPoint == 0)
		return ;
	this->energyPoint--;
	std::cout << this->name << "(FragTrap) attacks " << target << ", causing ";
	std::cout << this->attackDamage << " points of damage!" << std::endl;
	std::cout << this->name << "(FragTrap) has " << this->energyPoint << " energy point remaining\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint == 0)
	{
		std::cout << this->name << "(FragTrap) died long time ago\n";
		return ;
	}
	std::cout << this->name << " took " << amount << " of damage !\n";
	if (this->hitPoint <= amount)
	{
		std::cout << this->name << "(FragTrap) died\n";
		this->hitPoint = 0;
		return ;
	}
	this->hitPoint -= amount;
	std::cout << this->name << "(FragTrap) has " << this->hitPoint << " hit point remaining\n";
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint == 0)
		std::cout << this->name << "(FragTrap) died long time ago\n";
	if (this->energyPoint == 0)
		std::cout << this->name << "(FragTrap) has 0 energy point\n";
	if (this->energyPoint == 0 || this->hitPoint == 0)
		return ;
	this->energyPoint--;
	this->hitPoint += amount;
	std::cout << this->name << "(FragTrap) has repaired himself !\n";
	std::cout << this->name << "(FragTrap) has " << this->energyPoint << " of energy point remaining\n";
	std::cout << this->name << "(FragTrap) has " << this->hitPoint << " hit point remaining\n";
}
