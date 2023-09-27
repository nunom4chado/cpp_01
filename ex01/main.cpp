/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:59:13 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 11:13:11 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	int N = 10;
	Zombie* horde = zombieHorde(N, "John");

	for (int i = 0; i < N; i++) {
        horde[i].announce();
    }

	delete [] horde;
	
	return 0;
}
