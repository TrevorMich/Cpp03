/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:05:12 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/02 21:56:19 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
# include <string>
#include <iostream>

class	ClapTrap {
	private:
	
	protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;;
	
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &other);
	~ClapTrap();

	void 			attack(const std::string& target);
	ClapTrap		&operator=(ClapTrap const &other);
 	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			setHitPoints(unsigned int hitPoints);
	void			setEnergyPoints(unsigned int energyPoints);
	void			setAttackDamage(unsigned int attackDamage);
	void			setName(std::string name);
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int 	getAttackDamage(void) const;
	std::string		getName(void) const;
}	; 

#endif