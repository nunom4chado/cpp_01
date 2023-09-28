/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:06:00 by numartin          #+#    #+#             */
/*   Updated: 2023/09/28 15:41:29 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

std::string const Harl::_complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};


Harl::Harl( void ): _minLevel(0) {
    // std::cout << "contructer called" << std::endl;
}

Harl::~Harl( void ) {
    // std::cout << "destructer called" << std::endl;
}

void Harl::debug( void ) {
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::getIndex( std::string level ) const {
    for(int i=0; i < 4; i++) {
        if (_complains[i] == level)
            return i;
    }
    return -1;
}

void Harl::complain( std::string level ) {
    void    (Harl::*memberFuncs[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int index = this->getIndex(level);
    if (index == -1)
        return;
        
    if (index >= this->_minLevel)
        (this->*memberFuncs[index])();
}

void Harl::setMinLevel( int i ) {
    if (i < 0)
        i = 0;
    this->_minLevel = i;
}