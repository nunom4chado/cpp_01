/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:19:50 by numartin          #+#    #+#             */
/*   Updated: 2023/10/03 11:11:10 by numartin         ###   ########.fr       */
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
	size_t	target_pos;

	// reading with getline to keep spaces
	while(getline(ifs, line)) {
		
		// find every occurrence of the word and replace it 
		while ((target_pos = line.find(target)) != std::string::npos && target != replaceable) {
			line.erase(target_pos, target.length());
			line.insert(target_pos, replaceable);
		}

		ofs << line;

		// only add newline if the ifstream does not have eof
		// otherwise an extra newline at the end of the file may be added
		if (!ifs.eof())
			 ofs << std::endl;
	}

	ifs.close();
	ofs.close();

	return 0;
}