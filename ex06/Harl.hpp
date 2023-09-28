/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:59:54 by numartin          #+#    #+#             */
/*   Updated: 2023/09/28 15:32:01 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

#include <string>

class Harl {
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level );
        int getIndex( std::string level ) const;
        void setMinLevel( int i);

    private:
        static std::string const _complains[4];
        int _minLevel;
        
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif