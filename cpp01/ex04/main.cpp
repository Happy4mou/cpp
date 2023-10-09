/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:07:18 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/09/29 20:56:20 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pr.hpp"

int main (int ac , char **av){

    std::string str;
    if (ac == 4){
        str = open_file(av[1]);
        readAndReplace(str , av[2] , av[3]);
        insert_inFile(str, av[1]);        
    }
    
    
}