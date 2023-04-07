/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:58:11 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 05:04:53 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("Bob");

	std::cout << "name: " << a.getName() << std::endl;
    std::cout << "Hp: " << a.getHP() << std::endl;
    std::cout << "Ep: " << a.getEP() << std::endl;
    std::cout << "Ad: " << a.getAD() << std::endl;
    a.attack("Fake Bob");
    DiamondTrap b(a);
    b.attack("Fake Bob 2");
    DiamondTrap c;
    c = b;
	c.attack("Bob?");
	for (int i = 0; i < 50; i++)
		c.attack("noob");
	c.whoAmI();
	return (0);
}
