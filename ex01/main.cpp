/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:35:28 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/02 21:58:41 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "CLAPTRAP\n";
	std::cout << partition << std::endl;

	{
		ClapTrap	clap("clappy");
		clap.attack("scav");
	}

	std::cout << partition << std::endl;
	std::cout << "SCAVTRAP\n";
	std::cout << partition << std::endl;

	ScavTrap	scav("scav");
	scav.attack("clappy");
	scav.takeDamage(1);
	scav.guardGate();
	scav.beRepaired(23);
	std::cout << "Scav energy points: " << scav.getEnergyPoints() << std::endl;

	std::cout << partition << std::endl;
	std::cout << partition << std::endl;
	ScavTrap scav2(scav);
	scav.attack("clappy");
	scav.takeDamage(1);
	scav.guardGate();
	scav.beRepaired(23);
	std::cout << "Scav energy points: " << scav.getEnergyPoints() << std::endl;
	std::cout << partition << std::endl;
	std::cout << partition << std::endl;
}
