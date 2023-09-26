/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:51:13 by numartin          #+#    #+#             */
/*   Updated: 2023/09/26 18:41:43 by numartin         ###   ########.fr       */
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

private:
	std::string _name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
