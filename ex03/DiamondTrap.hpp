/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:10:32 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 14:09:51 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
		DiamondTrap();
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &cp);
		DiamondTrap &operator=(const DiamondTrap &cp);
		void attack(const std::string &target);
		void whoAmI();
};
