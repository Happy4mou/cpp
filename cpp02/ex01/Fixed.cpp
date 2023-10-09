/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:11:06 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/05 10:10:58 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout<<"Default constructor called\n";
    fixed_point = 0;
}

Fixed::Fixed(const int i){
    std::cout<<"Int constructor called\n";
    fixed_point = i << bits;
}

Fixed::Fixed(const float i){
    std::cout<<"Float constructor called\n";
    fixed_point = roundf(i * (1 << bits));
}

Fixed::Fixed(const Fixed &ob){
    std::cout<<"Copy constructor called\n";
    fixed_point = ob.fixed_point;
}

int Fixed::getRawBits() const {
    std::cout<<"getRawBits member function called\n";
    return fixed_point;
}

void Fixed::setRawBits(int const raw){
    
    std::cout<<"setRawBits member function called\n";
    fixed_point = raw;
}

Fixed& Fixed::operator=(const Fixed &obj){
    std::cout<<"Copy assignment operator called\n";
    fixed_point = obj.fixed_point;
    return *this;
}

float Fixed::toFloat( void ) const {
    return (float)(fixed_point) / (1 << bits);
}

int Fixed::toInt( void ) const {
     int i = fixed_point >> bits;
     return i;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
    
    os << obj.toFloat();
    return os;
}

Fixed::~Fixed(){
    std::cout<<"Destructor called\n";
    
}