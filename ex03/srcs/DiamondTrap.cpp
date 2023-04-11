/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:21:47 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 18:22:17 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap NULL created\n";

	ClapTrap::name = "NULL_clap_name";
	this->name = "NULL";
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap " << this->name << " created\n";

	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->name << "(DiamondTrap) exiting..\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->name << " and i'm originated from ";
	std::cout << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

unsigned int	DiamondTrap::getHP()
{
	return this->hitPoint;
}

unsigned int	DiamondTrap::getEP()
{
	return this->energyPoint;
}

unsigned int	DiamondTrap::getAD()
{
	return this->attackDamage;
}

std::string	DiamondTrap::getName()
{
	return this->name;
}
