/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:33:50 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 10:15:58 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    
    private:
        Weapon *obj;
        std::string name;
    public:
        HumanB(std::string);
        void setWeapon(Weapon &club);
        void attack();
        ~HumanB();   
};

#endif