/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:38:27 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 17:27:42 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	this->name = "null";
	std::cout << "ClapTrap created\n";
}

ClapTrap::ClapTrap(std::string name)
{
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	this->name = name;
	std::cout << "ClapTrap (NAME) created\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->name << "(ClapTrap) exiting...\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoint == 0)
		std::cout << this->name << "(ClapTrap) died long time ago\n";
	if (this->energyPoint == 0)
		std::cout << this->name << "(ClapTrap) has 0 energy point\n";
	if (this->energyPoint == 0 || this->hitPoint == 0)
		return ;
	this->energyPoint--;
	std::cout << this->name << "(ClapTrap) attacks " << target << ", causing ";
	std::cout << this->attackDamage << " points of damage!" << std::endl;
	std::cout << this->name << "(ClapTrap) has " << this->energyPoint << " energy point remaining\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint == 0)
	{
		std::cout << this->name << "(ClapTrap) died long time ago\n";
		return ;
	}
	std::cout << this->name << " took " << amount << " of damage !\n";
	if (this->hitPoint <= amount)
	{
		std::cout << this->name << "(ClapTrap) died\n";
		this->hitPoint = 0;
		return ;
	}
	this->hitPoint -= amount;
	std::cout << this->name << "(ClapTrap) has " << this->hitPoint << " hit point remaining\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint == 0)
		std::cout << this->name << "(ClapTrap) died long time ago\n";
	if (this->energyPoint == 0)
		std::cout << this->name << "(ClapTrap) has 0 energy point\n";
	if (this->energyPoint == 0 || this->hitPoint == 0)
		return ;
	this->energyPoint--;
	this->hitPoint += amount;
	std::cout << this->name << "(ClapTrap) has repaired himself !\n";
	std::cout << this->name << "(ClapTrap) has " << this->energyPoint << " of energy point remaining\n";
	std::cout << this->name << "(ClapTrap) has " << this->hitPoint << " hit point remaining\n";
}

unsigned int ClapTrap::getAttackDamage(void)
{
	return this->attackDamage;
}

unsigned int ClapTrap::getEnergyPoint(void)
{
	return this->energyPoint;
}

unsigned int ClapTrap::getHitPoint(void)
{
	return this->hitPoint;
}

std::string ClapTrap::getName(void)
{
	return this->name;
}
