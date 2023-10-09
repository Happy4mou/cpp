/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:11:06 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/05 18:00:49 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
   
    fixed_point = 0;
}

Fixed::Fixed(const int i){
    
    fixed_point = i << bits;
}

Fixed::Fixed(const float i){
    
    fixed_point = roundf(i * (1 << bits));
}

Fixed::Fixed(const Fixed &ob){
   
    fixed_point = ob.fixed_point;
}

int Fixed::getRawBits() const {
    
    return fixed_point;
}

void Fixed::setRawBits(int const raw){
    
   
    fixed_point = raw;
}

Fixed& Fixed::operator=(const Fixed &obj){
    
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

bool Fixed::operator>(const Fixed &obj) const{
    return (fixed_point > obj.fixed_point);
}
bool Fixed::operator>=(const Fixed &obj) const{
    return (fixed_point >= obj.fixed_point);
}

bool Fixed::operator<(const Fixed &obj) const{
    return (fixed_point < obj.fixed_point);
}
bool Fixed::operator<=(const Fixed &obj) const{
    return (fixed_point <= obj.fixed_point);
}

bool Fixed::operator==(const Fixed &obj) const{
    return (fixed_point == obj.fixed_point);
}

bool Fixed::operator!=(const Fixed &obj) const{
    return (fixed_point != obj.fixed_point);
}

Fixed Fixed::operator+(const Fixed &obj){
    Fixed ob;
    ob.fixed_point = fixed_point + obj.fixed_point;
    ob.fixed_point = ob.toFloat();
    return ob;
}
Fixed Fixed::operator*(const Fixed &obj){
    Fixed ob;
    ob.fixed_point = fixed_point * obj.fixed_point;
    ob.fixed_point = ob.toFloat();
    return ob;
}
Fixed Fixed::operator/(const Fixed &obj){
    Fixed ob;
    ob.fixed_point = fixed_point / obj.fixed_point;
    ob.fixed_point = ob.toFloat();
    return ob;
}
Fixed Fixed::operator-(const Fixed &obj){
    Fixed ob;
    ob.fixed_point = fixed_point - obj.fixed_point;
    ob.fixed_point = ob.toFloat();
    return ob;
}

Fixed& Fixed::operator++(){
    ++fixed_point;
    return *this;
}
Fixed Fixed::operator++(int){
     Fixed h ;
     h.fixed_point = fixed_point; 
    fixed_point++;
    return h;
}
Fixed& Fixed::operator--(){
    --fixed_point;
    return *this;
}
Fixed Fixed::operator--(int){
     Fixed h ;
     h.fixed_point = fixed_point; 
    fixed_point--;
    return h;
}

Fixed& Fixed::min(Fixed &ob1, Fixed &ob2){
    
    if (ob1 < ob2)
        return ob1;
    else
        return ob2;
}
const Fixed&  Fixed::min(const Fixed &ob1, const Fixed &ob2){
    
    if (ob1 < ob2)
        return ob1;
    else
        return ob2;
}
Fixed& Fixed::max(Fixed &ob1, Fixed &ob2){
    
    if (ob1 > ob2)
        return ob1;
    else
        return ob2;
}
const Fixed&  Fixed::max(const Fixed &ob1, const Fixed &ob2){
    
    if (ob1 > ob2)
        return ob1;
    else
        return ob2;
}

Fixed::~Fixed(){
   
}
