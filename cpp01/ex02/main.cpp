/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:41:10 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/10/09 10:40:43 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    
    std::string str = "happy";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout<<"/////addresses////....\n\n";
    std::cout<< "the address of str is : "<< &str<< std::endl;
    std::cout<< "the address of stringPTR is : "<< stringPTR<< std::endl;
    std::cout<< "the address of stringFER is : "<< &stringREF<< std::endl;

    std::cout<<"\n/////values////....\n\n";
    std::cout<< "the value of str is : "<< str<< std::endl;
    std::cout<< "the value pointed to by stringPTR is : "<< *stringPTR<< std::endl;
    std::cout<< "the value pointed to by stringFER is : "<< stringREF<< std::endl;
    
}