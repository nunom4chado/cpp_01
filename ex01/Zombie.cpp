/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:55:18 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 11:19:39 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ): _name("unkown") {
	std::cout << "zombie " << this->_name << " constructer called" << std::endl;
}

Zombie::Zombie( std::string name ): _name(name) {
	std::cout << "zombie " << this->_name << " constructer called" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "zombie " << this->_name << " destructer called" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ) {
	std::cout << "zombie " << this->_name << "'s name updated to " << name << std::endl;
	this->_name = name;
}
