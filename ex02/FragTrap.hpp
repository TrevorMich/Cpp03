/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 03:14:43 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/03 03:16:56 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &frag);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &frag);
	void		highFivesGuys(void);
	void		attack(const std::string &target);
};

#endif