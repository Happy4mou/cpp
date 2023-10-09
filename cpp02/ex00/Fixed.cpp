/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:11:06 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/05 09:54:53 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout<<"Default constructor called\n";
    fixed_point = 0;
}

Fixed::Fixed(Fixed &ob){
    std::cout<<"Copy constructor called\n";
    fixed_point = ob.fixed_point;
}

int Fixed::getRawBits()const{
    std::cout<<"getRawBits member function called\n";
    return fixed_point;
}

void Fixed::setRawBits(int const raw){
    
    std::cout<<"setRawBits member function called\n";
    fixed_point = raw;
}

Fixed& Fixed::operator=(const Fixed &obj){
    std::cout<<"Copy assignment operator called\n";
    fixed_point = obj.getRawBits();
    return *this; // chaining ex : a++ > 5 --> void > 5 ---> a > 5
}

Fixed::~Fixed(){
    
}
