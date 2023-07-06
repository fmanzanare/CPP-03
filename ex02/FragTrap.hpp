/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:59:31 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 11:07:33 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &cp);
		FragTrap &operator=(const FragTrap &cp);
		void highFivesGuys();

};

#endif
