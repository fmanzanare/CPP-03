/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:23:47 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 11:29:39 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	FragTrap ft1("ft1");
	FragTrap ft2("ft2");
	ScavTrap st1("st1");
	ScavTrap st2("st2");

	ft1.beRepaired(10);
	ft1.attack("ft2");
	ft2.takeDamage(30);
	ft2.takeDamage(30);
	ft2.takeDamage(30);
	ft2.takeDamage(30);
	ft2.beRepaired(10);
	return (0);
}
