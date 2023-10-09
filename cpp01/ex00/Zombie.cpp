/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:47:45 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 09:13:49 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
    std::cout<<name<<": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string n){
    name = n;
}
Zombie::~Zombie(){}
