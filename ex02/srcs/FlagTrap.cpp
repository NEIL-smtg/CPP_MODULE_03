/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:33:26 by suchua            #+#    #+#             */
/*   Updated: 2023/04/07 23:41:10 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void)
{
	std::cout << "FlagTrap (NULL) created\n";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	this->name = "NULL";
}

FlagTrap::FlagTrap(std::string name)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	this->name = name;
	std::cout << "FlagTrap " << this->name << " created\n";
}

FlagTrap::FlagTrap(const FlagTrap& other)
{
	this->name = other.name;
}

FlagTrap&	FlagTrap::operator=(const FlagTrap& other)
{
	this->name = other.name;
	return *this;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << this->name << "(FlagTrap) exiting...\n";
}

void	FlagTrap::highFivesGuys(void)
{
	std::cout << this->name << "(FlagTrap) requested for a positive high fives request HEHE...\n";
}
