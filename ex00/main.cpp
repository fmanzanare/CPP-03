/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:51:00 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/01 20:56:10 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap c1("c1");
	ClapTrap c2("c2");

	c1.attack("c2");
	c2.takeDamage(1);
	c2.beRepaired(1);
	c2.attack("c1");
	c1.takeDamage(9);
	for (int i = 0; i < 10; i++)
		c1.beRepaired(1);

	return (0);
}
