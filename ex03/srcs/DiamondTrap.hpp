/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:14:25 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 18:22:13 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap&	operator=(const DiamondTrap& other);
		void			whoAmI();
		void			attack(const std::string& target);

		//getters
		unsigned int	getHP();
		unsigned int	getEP();
		unsigned int	getAD();
		std::string		getName();
	private:
		std::string		name;
		unsigned int	hitPoint;
		unsigned int	attackDamage;
		unsigned int	energyPoint;
};

#endif
