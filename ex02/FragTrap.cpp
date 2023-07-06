/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:06:49 by fmanzana          #+#    #+#             */
/*   Updated: 2023/07/06 18:00:46 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "Noname";
	this->_hits = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap created by default constructor.\n";
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_hits = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap " + this->_name + " has been created.\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " + this->_name + " has been destroyed.\n";
}

FragTrap::FragTrap(const FragTrap &cp) : ClapTrap() {
	*this = cp;
	std::cout << "FragTrap " + this->_name + " has been created with copy constructor.\n";
}

FragTrap &FragTrap::operator=(const FragTrap &cp) {
	std::cout << "Copy assignment operator called.\n";
	this->_name = cp._name;
	this->_energy = cp._energy;
	this->_hits = cp._hits;
	this->_damage = cp._damage;
	return (*this);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " + this->_name + " says High Fives Guys!\n";
}
