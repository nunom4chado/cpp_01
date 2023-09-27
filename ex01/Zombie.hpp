/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:51:13 by numartin          #+#    #+#             */
/*   Updated: 2023/09/27 11:17:27 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <string>

class Zombie {

public:
	Zombie( void );
	~Zombie( void );

	Zombie( std::string pname );

	void announce( void );
	void setName( std::string name );

private:
	std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
