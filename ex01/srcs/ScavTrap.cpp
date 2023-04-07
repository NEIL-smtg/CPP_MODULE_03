/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:29:42 by suchua            #+#    #+#             */
/*   Updated: 2023/04/07 23:23:48 by suchua           ###   ########.fr       */
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
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap with name created\n";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	this->name = name;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " exiting..\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	this->name = other.name;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	this->name = other.name;
	return *this;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScapTrap " << this->getName() << " is in Gate Keeper mode\n";
}
