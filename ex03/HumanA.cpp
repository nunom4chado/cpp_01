/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:20:01 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 15:50:23 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon& weapon ): _name(name), _weapon(weapon) {
    std::cout << "HumanA " << this->_name << " with " << this->_weapon.getType() << " weapon spawned" << std::endl;
}

HumanA::~HumanA( void ) {
    std::cout << "HumanA " << this->_name << " with " << this->_weapon.getType() << " weapon was destroyed" << std::endl;
}

void HumanA::attack( void ) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}