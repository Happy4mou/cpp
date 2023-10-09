/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:12:27 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/07 16:15:33 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    HitPoints = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap &obj){
    Name = obj.Name;
}

void FragTrap:: highFivesGuys(){
    std::cout<<" high Fives Guys !\n";
}

FragTrap::~FragTrap(){
    
}