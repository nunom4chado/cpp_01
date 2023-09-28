/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:20:36 by numartin          #+#    #+#             */
/*   Updated: 2023/09/28 13:21:36 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SED_H
# define FT_SED_H

#include <string>

int ft_sed(std::string src_file, std::string dest_file, std::string target, std::string replaceable);

#endif