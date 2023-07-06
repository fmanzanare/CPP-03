/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:43:52 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 14:19:18 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "Noname";
	ClapTrap::_name = "Noname_clap_name";
	this->_hits = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "DiamondTrap created by default constructor.\n";
}

DiamondTrap::DiamondTrap(std::string name) {
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hits = FragTrap::_hits;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " + this->_name + " has been created.\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " + this->_name + " has been destroyed.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &cp) {
	*this = cp;
	std::cout << "DiamondTrap " + this->_name + " has been created with copy constructor.\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cp) {
	std::cout << "Copy assigment operator called.\n";
	ClapTrap::_name = cp._name + "_clap_name";
	this->_name = cp._name;
	this->_hits = cp._hits;
	this->_energy = cp._energy;
	this->_damage = cp._damage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " + this->_name + " with ClapTrap name " + ClapTrap::_name + ".\n";
}
