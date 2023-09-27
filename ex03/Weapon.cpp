/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:51:00 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 15:16:26 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( void ): _type("unkown") {
    std::cout << "Weapon " << this->_type << " crafted" << std::endl;
}

Weapon::Weapon( std::string type ): _type(type) {
    std::cout << "Weapon " << this->_type << " crafted" << std::endl;
}

Weapon::~Weapon( void ) {
    std::cout << "Weapon " << this->_type << " destroyed" << std::endl;
}

std::string const & Weapon::getType( void ) {
    return this->_type;
}

void Weapon::setType( std::string type) {
    this->_type = type;
}