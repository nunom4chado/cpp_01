/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:58:13 by numartin          #+#    #+#             */
/*   Updated: 2023/10/11 12:10:21 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "Harl.hpp"

/**
 * TESTS
 * 
 * * show all complaints *
 * ./harlFilter
 * 
 * * show complaints from DEBUG and above *
 * ./harlFilter DEBUG
 * 
 * * show all complaints from WARNING and above *
 * ./harlFilter WARNING
 * 
 * * show this message "[ Probably complaining about insignificant problems ]" *
 * ./harlFilter DEBUGGGGG
 * 
 * * show complaints from DEBUG and above *
 * ./harlFilter DEBUG AFSDF
*/

int main( int argc, char **argv ) {
	Harl harl;

	if (argc > 1)
		harl.setMinLevel(argv[1]);
		
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("DEBUGGGG"); // is not a valid level and will output nothing
	harl.complain(""); // is not a valid level and will output nothing
	
	return 0;
}