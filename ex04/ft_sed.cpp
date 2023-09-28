/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:19:50 by numartin          #+#    #+#             */
/*   Updated: 2023/09/28 13:22:17 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <string>
#include <fstream>

int ft_sed(std::string src_file, std::string dest_file, std::string target, std::string replaceable) {
	std::ifstream ifs(src_file.c_str());
	if (ifs.fail()) {
		std::cerr << "Error: " << strerror(errno) << std::endl;
		return errno;
	}

	std::ofstream ofs(dest_file.c_str());
	if (ofs.fail()) {
		ifs.close();
		std::cerr << "Error: " << strerror(errno) << std::endl;
		return errno;
	}

	std::string line;
	// reading with getline to manually handle spaces
	while(getline(ifs, line)) {
		for ( std::string::iterator it=line.begin(); it!=line.end(); ++it) {
			if (strncmp(&*it, target.c_str(), target.length()) == 0) {
				ofs << replaceable;
				it += target.length() - 1;
			} else
				ofs << *it;
		}
		ofs << std::endl;
	}

	ifs.close();
	ofs.close();

	return 0;
}