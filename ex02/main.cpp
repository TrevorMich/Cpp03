/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:35:28 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/03 03:33:52 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "SCAVTRAP\n";
	std::cout << partition << std::endl;
	{
		ScavTrap	scav("scav");
		scav.attack("clappy");
		scav.takeDamage(1);
		scav.guardGate();
		scav.beRepaired(23);
		std::cout << "Scav energy points: " << scav.getEnergyPoints() << std::endl;
	}
	std::cout << partition << std::endl;
	std::cout << "FRAGTRAP\n";
	std::cout << partition << std::endl;
	FragTrap frog;
		frog.highFivesGuys();
		std::cout << "name: " << frog.getName() << std::endl;
		std::cout << "Frag attack damage: " << frog.getAttackDamage() << std::endl;
		frog.attack("forg");
		frog.getAttackDamage();
		FragTrap fraggy("fraggy");
		fraggy.highFivesGuys();
		fraggy.beRepaired(12);
}
