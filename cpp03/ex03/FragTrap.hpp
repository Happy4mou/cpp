/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:31:43 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/08 12:48:38 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap{
    
    public:
        FragTrap();
        FragTrap(FragTrap &obj);

        void  highFivesGuys();

        ~FragTrap();
};


#endif