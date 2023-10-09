/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:48:39 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 09:31:26 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{

    private:
        std::string name;
    public:
        void announce(void);
        Zombie();
        Zombie(std::string n);
        void setter(std::string nm);
        ~Zombie();
        
};

Zombie* zombieHorde( int N, std::string name );

#endif