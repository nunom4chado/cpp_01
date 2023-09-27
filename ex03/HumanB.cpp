/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:51:56 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 16:15:28 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL) {
    std::cout << "HumanB " << this->_name << " without weapon spawned" << std::endl;
}

HumanB::~HumanB( void ) {
    if (this->_weapon)
        std::cout << "HumanB " << this->_name << " with " << this->_weapon->getType() << " weapon was destroyed" << std::endl;
    else
        std::cout << "HumanB " << this->_name << " without weapon was destroyed" << std::endl;
}

void HumanB::attack( void ) {
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}