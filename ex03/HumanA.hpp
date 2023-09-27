/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:11:13 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 15:50:31 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H

#include <string>
#include "Weapon.hpp"

class HumanA {
    public:
        HumanA( std::string name, Weapon& weapon);
        ~HumanA( void );

        void attack( void );

    private:
        std::string _name;
        Weapon&     _weapon;
};

#endif