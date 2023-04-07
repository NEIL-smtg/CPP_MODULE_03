/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:58:11 by suchua            #+#    #+#             */
/*   Updated: 2023/04/07 23:38:42 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int	main(void)
{
	FlagTrap	neil("neil");
	FlagTrap	zixian("zixian");

	neil.attack("zixian");

	zixian.takeDamage(20);

	zixian.beRepaired(10);

	zixian.attack("neil");
	
	neil.takeDamage(20);

	neil.beRepaired(5);

	for (int i = 0; i < 52; i++)
		zixian.attack("neil");
	
	zixian.beRepaired(10);
	return (0);
}