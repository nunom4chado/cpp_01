/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:20:22 by numartin          #+#    #+#             */
/*   Updated: 2023/10/03 11:18:01 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ft_sed.hpp"

/**
 * TESTS
 * 
 *  * INVALID ARGUMENTS *
 * ./sed source ola
 * ./sed source
 * ./sed
 * ./sed source ola adeus more
 * ./sed filenotfound ola adeus
 * ./sed filewithoutpermissions ola adeus
 * 
 * * MUST WORK *
 * ./sed source ola adeus
 * ./sed source "this is" "THIS IS"
 * ./sed source ola ola
 * ./sed source ola ""
 * ./sed source " " ""
 * ./sed source "  " ""
 * ./sed source wordnotfound "NO"
 * 
 * * REPLACING NOTHING (s1) CANT GET STUCK IN INFINITE LOOP *
 * ./sed source "" ""
 * ./sed source "" ola
 * 
*/

int main( int argc, char **argv ) {
	if (argc != 4) {
		std::cout << "Invalid arguments: <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string src_file = argv[1];
	std::string dest_file = src_file + ".replace";
	std::string target = argv[2];
	std::string replaceable = argv[3];

	if (target.length() == 0) {
		std::cerr << "Error: " << "<s1> can't be an empty word" << std::endl;
		return (2);
	}

	return ft_sed(src_file, dest_file, target, replaceable);
}