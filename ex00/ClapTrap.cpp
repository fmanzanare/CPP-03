/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:24:34 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/01 20:54:05 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->hits = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout << "ClapTrap " + this->_name + " has been created.\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " + this->_name + " has been destroyed.\n";
}

ClapTrap::ClapTrap(const ClapTrap &cp) {
	this->_name = cp._name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp) {
	this->_name = cp._name;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (this->energy <= 0) {
		std::cout << "ClapTrap " + this->_name + " has not enough energy.\n";
		return ;
	}
	if (this->hits <= 0) {
		std::cout << "ClapTrap " + this->_name + " has not enough hits.\n";
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " attacks " + target + ", causing " << this->damage << " point of damage.\n";
	this->energy--;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy <= 0) {
		std::cout << "ClapTrap " + this->_name + " has not enough energy.\n";
		return ;
	}
	if (this->hits <= 0) {
		std::cout << "ClapTrap " + this->_name + " has not enough hits.\n";
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " has been repaired " << amount << " hits points.\n";
	this->hits += amount;
	this->energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->energy <= 0) {
		std::cout << "ClapTrap " + this->_name + " has not enough energy.\n";
		return ;
	}
	if (this->hits <= 0) {
		std::cout << "ClapTrap " + this->_name + " has not enough hits.\n";
		return ;
	}
	std::cout << "ClapTrap " + this->_name + " has received " << amount << " damage.\n";
	this->hits -= amount;
}
