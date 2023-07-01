/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:24:25 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/01 20:53:40 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int			hits;
		int			energy;
		int			damage;
		ClapTrap();
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &cp);
		ClapTrap &operator=(const ClapTrap &cp);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
