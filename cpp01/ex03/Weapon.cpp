/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:30:46 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 10:14:31 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str){
    type = str;
}
Weapon::~Weapon(){}

std::string Weapon::getType() const {
    return type;
}

void Weapon::setType(std::string str){
        type = str;
}
