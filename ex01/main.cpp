/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:30:58 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/05 12:30:58 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap st1("st1");
	ScavTrap st2("st2");

	st1.attack("st2");
	st2.takeDamage(20);
	st1.attack("st2");
	st2.takeDamage(20);
	st1.attack("st2");
	st2.takeDamage(20);
	st1.attack("st2");
	st2.takeDamage(20);
	st1.attack("st2");
	st2.takeDamage(20);
	st2.beRepaired(10);

	return (0);
}
