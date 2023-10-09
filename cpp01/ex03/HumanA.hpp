/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:32:01 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 10:16:43 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
    
    private:
        Weapon &obj;
        std::string name;
    public:
        HumanA (std::string str, Weapon& club):obj(club), name(str);
        void attack();
        ~HumanA();     
};



#endif