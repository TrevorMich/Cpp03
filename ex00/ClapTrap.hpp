/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:05:12 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/02 21:08:53 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class	ClapTrap {
	private:
	std::string		_name;
	int				_hitPoints;
	int				_energyPoints;
	int				_attackDamage;
	
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &other);
	~ClapTrap();
	void attack(const std::string& target);
 	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	
	void			setHitPoints(unsigned int hitPoints);
	void			setEnergyPoints(unsigned int energyPoints);
	void			setAttackDamage(unsigned int attackDamage);
	void			setName(std::string name);
	unsigned int 	getAttackDamage(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	std::string		getName(void) const;
}	;


#endif