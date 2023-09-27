/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:32:05 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 16:17:01 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void ) {
	// Weapon my_weapon;
	// my_weapon.setType("axe");
	// std::cout << "Equiped a new " << my_weapon.getType() << " weapon" << std::endl;
	// // my_weapon.getType() = "sword";
	// // returning a const ref to the string prevents assining a new value
	// // if const is remove from getType, the assignment above will work
	// std::cout << "Equiped a new " << my_weapon.getType() << " weapon" << std::endl;
	
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return 0;

}
