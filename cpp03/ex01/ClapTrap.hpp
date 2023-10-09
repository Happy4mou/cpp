/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:31:43 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/06 18:44:22 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

    protected:
        std::string Name;
        int HitPoints;
        int EnergyPoint;
        int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(ClapTrap &obj);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        ~ClapTrap();
};

class ScavTrap : public ClapTrap{
    
    public:
        ScavTrap();
        ScavTrap(ScavTrap &obj);

        void attack(const std::string& target);
        void guardGate();

        ~ScavTrap();
};


#endif