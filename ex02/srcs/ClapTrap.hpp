/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:32:49 by suchua            #+#    #+#             */
/*   Updated: 2023/04/07 23:03:57 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap& other);
		ClapTrap&	operator=(const ClapTrap& other);

		// features
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		//getters
		unsigned int	getHitPoint(void);
		unsigned int	getEnergyPoint(void);
		unsigned int	getAttackDamage(void);
		std::string		getName(void);
	private:
		protected:std::string	name;
		protected:unsigned int	hitPoint;
		protected:unsigned int	energyPoint;
		protected:unsigned int	attackDamage;
};

#endif
