/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:02:48 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 11:26:23 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string.h>

/**
 * Since we can't pass parameters when initializing an array of Zombies
 * we must update the name for each one them after the initizalition
 * 
*/
Zombie* zombieHorde( int N, std::string name ) {
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}