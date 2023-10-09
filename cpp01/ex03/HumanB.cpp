/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:34:41 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 10:15:41 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str){
          name = str;
          obj = NULL;  
    
}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &club){
    obj = &club;
}


void HumanB::attack(){
    if (!obj)
        return ;
    std::cout<<name<<" attacks with thier "<<obj->getType()<<std::endl;
    
}