/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:43:12 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 15:16:48 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <string>

class Weapon {

    private:
        std::string _type;

    public:
        Weapon( void );
        ~Weapon( void );

        Weapon( std::string type );

        std::string const & getType( void );
        void setType( std::string );
};

#endif