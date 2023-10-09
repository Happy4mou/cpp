/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:37:06 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 10:29:05 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
    std::cout<<"[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(){
    std::cout<<"[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(){
    std::cout<<"[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(){
    std::cout<<"[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level ){

    int i = 0;
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while( i < 4){
        if(level == tab[i])
            break;
        i++;
    }
  switch (i)
  {
    case 0:
      debug();
      info();
      warning();
      error();
      break;
    case 1:
      info();
      warning();
      error();
      break;
    case 2:
      warning();
      error();
      break;
    case 3:
      error();
      break;
    default:
      std::cout<<"invalid !\n";
      break;
  }
    
}

