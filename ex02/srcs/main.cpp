/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:58:11 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 04:05:33 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	neil("neil");
	FragTrap	zixian("zixian");

	neil.attack("zixian");

	zixian.takeDamage(30);

	zixian.beRepaired(10);

	zixian.attack("neil");
	
	neil.takeDamage(30);

	neil.beRepaired(5);

	for (int i = 0; i < 100; i++)
		zixian.attack("fakePerson");
	zixian.beRepaired(10);
	return (0);
}
