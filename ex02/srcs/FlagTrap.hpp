/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:26:53 by suchua            #+#    #+#             */
/*   Updated: 2023/04/07 23:39:20 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_HPP
# define FLAG_TRAP_HPP

# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap(void);
		FlagTrap(std::string name);
		~FlagTrap(void);
		FlagTrap(const FlagTrap& other);
		FlagTrap&	operator=(const FlagTrap& other);
		void		highFivesGuys(void);
};

#endif
