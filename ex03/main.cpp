/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:02:22 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 14:18:15 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap dt1("dt1");
	DiamondTrap dtcp(dt1);

	dt1.whoAmI();
	dtcp.whoAmI();

	DiamondTrap dt2("dt2");

	dt2.attack("foo");
	dt2.beRepaired(10);
	dt2.takeDamage(20);

	return (0);
}
