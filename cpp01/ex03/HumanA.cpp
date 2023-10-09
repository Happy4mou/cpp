/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:33:10 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 10:17:40 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void HumanA::attack(){
    std::cout<<name<<" attacks with thier "<<obj.getType()<<std::endl;
    
}

HumanA::HumanA (std::string str, Weapon& club):obj(club), name(str){}
        
HumanA::~HumanA(){}