/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:59:13 by numartin          #+#    #+#             */
/*   Updated: 2023/09/26 18:57:27 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	Zombie first("John");
	Zombie* second = newZombie("Ava");
	randomChump("Carl");

	first.announce();
	second->announce();

	delete second;
	return 0;
}
