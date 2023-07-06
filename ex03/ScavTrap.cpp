/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:17:17 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/04 18:17:17 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "Noname";
	this->_hits = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap created by default constructor.\n";
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_hits = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " + this->_name + " has been created.\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " + this->_name + " has been destroyed.\n";
}

ScavTrap::ScavTrap(const ScavTrap &cp) : ClapTrap() {
	std::cout << "ScavTrap " + this->_name + " has been created with copy constructor.\n";
	*this = cp;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cp) {
	std::cout << "Copy assignment operator called.\n";
	this->_name = cp._name;
	this->_energy = cp._energy;
	this->_hits = cp._hits;
	this->_damage = cp._damage;
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energy <= 0) {
		std::cout << "ScavTrap " + this->_name + " has not enough energy.\n";
		return ;
	}
	if (this->_hits <= 0) {
		std::cout << "ScavTrap " + this->_name + " has not enough hits.\n";
		return ;
	}
	std::cout << "ScavTrap " + this->_name + " attacks " + target + ", causing " << this->_damage << " point of damage.\n";
	this->_energy--;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " + this->_name + " is now in Gate keeper mode.\n";
}
