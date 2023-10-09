/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:31:43 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/08 12:49:34 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define SCAVTRAP_HPP

class ScavTrap : virtual public ClapTrap{
    
    public:
        ScavTrap();
        ScavTrap(ScavTrap &obj);

        void attack(const std::string& target);
        void guardGate();

        ~ScavTrap();
};


#endif