/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:58:11 by suchua            #+#    #+#             */
/*   Updated: 2023/04/11 17:25:09 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	neil("neil");
	ClapTrap	zixian("zixian");

	//energy = 10 - 1
	neil.attack("zixian");

	//hitpoint = 10 - 3
	zixian.takeDamage(3);

	//enery 10 - 1, hitpoint = 7 + 1
	zixian.beRepaired(1);

	//enery 9 - 1
	zixian.attack("neil");
	
	//died
	neil.takeDamage(10);

	//died
	neil.beRepaired(5);

	//should print 8 attack, and 2 no energy
	for (int i = 0; i < 10; i++)
		zixian.attack("fakePerson");
	
	//total 3 no energy
	zixian.beRepaired(10);
	return (0);
}
