/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:09:43 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/03 17:54:54 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int fixed_point;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(Fixed &ob);
        Fixed& operator=(const Fixed &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

#endif