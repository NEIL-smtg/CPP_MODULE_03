/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:29:42 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 18:00:19 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap created\n";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	this->name = "NULL";
	isGuarding = false;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScapTrap " << name << " created\n";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	this->name = name;
	isGuarding = false;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " exiting..\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
: ClapTrap(other)
{
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

void	ScavTrap::guardGate(void)
{
	if (!isGuarding)
	{
		std::cout << "ScapTrap " << this->getName() << " is in Gate Keeper mode\n";
		isGuarding = true;
	}
	else
		std::cout << "ScapTrap " << this->getName() << " is already guarding the GATE !!\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoint == 0)
		std::cout << this->name << "(ScavTrap) died long time ago\n";
	if (this->energyPoint == 0)
		std::cout << this->name << "(ScavTrap) has 0 energy point\n";
	if (this->energyPoint == 0 || this->hitPoint == 0)
		return ;
	this->energyPoint--;
	std::cout << this->name << "(ScavTrap) attacks " << target << ", causing ";
	std::cout << this->attackDamage << " points of damage!" << std::endl;
	std::cout << this->name << "(ScavTrap) has " << this->energyPoint << " energy point remaining\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint == 0)
	{
		std::cout << this->name << "(ScavTrap) died long time ago\n";
		return ;
	}
	std::cout << this->name << " took " << amount << " of damage !\n";
	if (this->hitPoint <= amount)
	{
		std::cout << this->name << "(ScavTrap) died\n";
		this->hitPoint = 0;
		return ;
	}
	this->hitPoint -= amount;
	std::cout << this->name << "(ScavTrap) has " << this->hitPoint << " hit point remaining\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint == 0)
		std::cout << this->name << "(ScavTrap) died long time ago\n";
	if (this->energyPoint == 0)
		std::cout << this->name << "(ScavTrap) has 0 energy point\n";
	if (this->energyPoint == 0 || this->hitPoint == 0)
		return ;
	this->energyPoint--;
	this->hitPoint += amount;
	std::cout << this->name << "(ScavTrap) has repaired himself !\n";
	std::cout << this->name << "(ScavTrap) has " << this->energyPoint << " of energy point remaining\n";
	std::cout << this->name << "(ScavTrap) has " << this->hitPoint << " hit point remaining\n";
}
