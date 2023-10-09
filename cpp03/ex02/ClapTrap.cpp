/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:12:27 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/06 16:48:26 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    HitPoints = 10;
    EnergyPoint = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &obj){
    Name = obj.Name;
}

void ClapTrap::attack(const std::string& target){
    if(EnergyPoint > 0 && HitPoints > 0)
    {
        EnergyPoint--;
        std::cout<<"Claptrap "<<Name<<" "<<target <<" cousing "<<AttackDamage<<" point of damage!\n";
    }
    else 
        std::cout<<Name << " is dead!\n";
        
}

void ClapTrap::takeDamage(unsigned int amount){
    if(HitPoints > 0)
        HitPoints -= amount;
    else
        std::cout<<Name << " is dead!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
    
    if(EnergyPoint > 0 && HitPoints > 0)
    {
        HitPoints += amount;
        EnergyPoint--;
    }
    else 
        std::cout<<Name << " is dead!\n";
}

ClapTrap::~ClapTrap(){
    
}