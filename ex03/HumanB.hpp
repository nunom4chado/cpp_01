/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:11:21 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 16:15:32 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H

#include <string>
#include "Weapon.hpp"

class HumanB {
    public:
        HumanB( std::string name );
        ~HumanB( void );

        void attack( void );
        void setWeapon(Weapon& weapon);

    private:
        std::string _name;
        Weapon*     _weapon;
};

#endif