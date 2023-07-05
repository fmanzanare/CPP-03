/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:24:34 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/05 12:54:52 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "Noname";
	this->_hits = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "ClapTrap created by default constructor.\n";
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hits = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "ClapTrap " + this->_name + " has been created.\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " + this->_name + " has been destroyed.\n";
}

ClapTrap::ClapTrap(const ClapTrap &cp) {
	std::cout << "ClapTrap " + this->_name + " has been created with copy constructor.\n";
	*this = cp;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp) {
	std::cout << "Copy assignment operator called.\n";
	this->_name = cp._name;
	this->_energy = cp._energy;
	this->_hits = cp._hits;
	this->_damage = cp._damage;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energy <= 0) {
		std::cout << this->_name + " has not enough energy.\n";
		return ;
	}
	if (this->_hits <= 0) {
		std::cout << this->_name + " has not enough hits.\n";
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " attacks " + target + ", causing " << this->_damage << " point of damage.\n";
	this->_energy--;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy <= 0) {
		std::cout << this->_name + " has not enough energy.\n";
		return ;
	}
	if (this->_hits <= 0) {
		std::cout << this->_name + " has not enough hits.\n";
		return ;
	}
	std::cout << this->_name + " has been repaired " << amount << " hits points.\n";
	this->_hits += amount;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energy <= 0) {
		std::cout << this->_name + " has not enough energy.\n";
		return ;
	}
	if (this->_hits <= 0) {
		std::cout << this->_name + " has not enough hits.\n";
		return ;
	}
	std::cout << this->_name + " has received " << amount << " damage.\n";
	this->_hits -= amount;
}
