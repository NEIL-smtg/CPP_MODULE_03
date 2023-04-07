/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:26:53 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 05:20:30 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		virtual ~FragTrap(void);
		FragTrap(const FragTrap& other);
		FragTrap&	operator=(const FragTrap& other);
		void		highFivesGuys(void);
		// features
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		unsigned int	hitPoint;
		unsigned int	energyPoint;
		unsigned int	attackDamage;
};

#endif
