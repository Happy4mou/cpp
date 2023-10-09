/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:12:27 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/06 18:52:07 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    HitPoints = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &obj){
    Name = obj.Name;
}

void ScavTrap::attack(const std::string& target){
    if(EnergyPoint > 0 && HitPoints > 0)
    {
        EnergyPoint--;
        std::cout<<"ScavTrap "<<Name<<" "<<target <<" cousing "<<AttackDamage<<" point of damage!\n";
    }
    else 
        std::cout<<Name << " is dead!\n";
        
}

void ScavTrap::guardGate(){
    std::cout<<"guardGate Called !\n";
}

ScavTrap::~ScavTrap(){
    
}