/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:15:34 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/02 21:02:02 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default name"), _hitPoints(10), _attackDamage(0) {

	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap (ClapTrap const &other) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap () {

	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap took damage, making it lose " << amount << " hit points!\n";
	this->_hitPoints -= amount; 
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap has no energy points or hit points left to repair itself!\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repairs itself" << ", by the amount of " << amount << " hit points\n";
	this->_hitPoints += amount;
	this->_energyPoints--;
}
void	ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap has no energy points or hit points left to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::setHitPoints(unsigned int hit_points)
{
	this->_hitPoints = hit_points;
}

void	ClapTrap::setEnergyPoints(unsigned int energy_points)
{
	this->_energyPoints = energy_points;
}

void	ClapTrap::setAttackDamage(unsigned int attack_damage)
{
	this->_attackDamage = attack_damage;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

unsigned int	ClapTrap::getHitPoints(void) const{
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void) const{
	return this->_attackDamage;
}

std::string	ClapTrap::getName(void) const{
	return this->_name;
}