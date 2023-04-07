/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:21:47 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 05:14:46 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	// ClapTrap("NULL_clap_trap");
	this->name = "NULL";
	std::cout << "DiamondTrap NULL created\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
	// ClapTrap(name + "_clap_trap");
	this->name = name;
	std::cout << "DiamondTrap " << this->name << " created\n";
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
	std::cout << "My name is " << this->name << " and my parents are ";
	std::cout << ScavTrap::name << "(ScavTrap) and " << FragTrap::name << "(FragTrap)\n";
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