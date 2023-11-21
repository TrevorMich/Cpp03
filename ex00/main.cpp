/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:35:28 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/02 21:18:36 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	{
		ClapTrap d("sample");
	}

	ClapTrap	clap("clappy");
	ClapTrap	trap("trappy");

	clap.setAttackDamage(2);
	for (int i = 0; i < 11; i++)
		clap.attack("trappy");
	std::cout << "Clap attack damage: " << clap.getAttackDamage() << std::endl;
	trap.attack("clappy");
	for (int i = 0; i < 3; i++)
	{
		trap.takeDamage(2);
		std::cout << "Trap hit point: " << trap.getHitPoints() << std::endl;
	}
	trap.beRepaired(5);
	std::cout << "Trap hit point: " << trap.getHitPoints() << std::endl;
	std::cout << "Trap energy point: " << trap.getEnergyPoints() << std::endl;

	return (0);
}
