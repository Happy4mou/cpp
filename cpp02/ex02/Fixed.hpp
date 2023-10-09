/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:09:43 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/05 17:52:47 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fixed_point;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float i);
        Fixed(const Fixed &ob);
        Fixed& operator=(const Fixed &obj);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        bool operator>(const Fixed &obj) const;
        bool operator>=(const Fixed &obj) const;
        bool operator<(const Fixed &obj) const;
        bool operator<=(const Fixed &obj) const;
        bool operator==(const Fixed &obj) const;
        bool operator!=(const Fixed &obj) const;

        Fixed operator+(const Fixed &obj);
        Fixed operator*(const Fixed &obj);
        Fixed operator/(const Fixed &obj);
        Fixed operator-(const Fixed &obj);

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        static Fixed& min(Fixed &ob1, Fixed &ob2);
        static const Fixed& min(const Fixed &ob1, const Fixed &ob2);
        static Fixed& max(Fixed &ob1, Fixed &ob2);
        static const Fixed& max(const Fixed &ob1, const Fixed &ob2);
        
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif