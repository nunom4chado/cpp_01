/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:58:13 by numartin          #+#    #+#             */
/*   Updated: 2023/09/28 15:51:59 by numartin         ###   ########.fr       */
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
	int minLevel = 0;

	if (argc > 1) {
		minLevel = harl.getIndex(argv[1]);
		if (minLevel == -1) {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return 0;
		}
	}

	harl.setMinLevel(minLevel);

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("DEBUGGGG"); // is not a valid level and will output nothing
	harl.complain(""); // is not a valid level and will output nothing
	
	return 0;
}