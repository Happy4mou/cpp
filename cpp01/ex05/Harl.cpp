/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:37:06 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 10:27:55 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
    std::cout<<"[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(){
    std::cout<<"[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(){
    std::cout<<"[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(){
    std::cout<<"[ERROR] This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level ){

    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])() = {&Harl::debug , &Harl::info , &Harl::warning , &Harl::error};
    
    for(int i = 0 ; i < 4 ; i++)
    {
        if(level == tab[i])
        {(this->*ptr[i])();
            return;
        } 
    }
    std::cout<<"invalid !\n";
    
}

